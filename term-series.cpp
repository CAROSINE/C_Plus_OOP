#include<iostream>
using namespace std;
class series
{
  int n,i,sum;
  public:
      series(int num)
      {
          n= num;
          sum=0;
          for(i=1;i<=n;i++)
          {
              int termsum=0;
              for(int J=1;J<=i;J++)
              {
                  termsum+=J; //termsum= termsum + J
              }
              cout<<"Term"<<i<<"="<<termsum<<endl;
              sum = sum + termsum ;
          }
      }
      series()
      {
        cout<<"The sum of the series is: "<<sum;
      }
};
  int main()
  {
      int n;
      cout<<"Enter the value of n: ";
      cin>>n;
      series object(n);
      return 0;
}
