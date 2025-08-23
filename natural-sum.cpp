#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"enter a positive integer: ";
    cin>>n;
    for(i=1;i<=n;i++)
    sum+=i;
    cout<<"the sum is= "<<sum;
    return 0;
}
