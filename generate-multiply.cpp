#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter any number: ";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<i*n<<endl;
    }
    return 0;
}
