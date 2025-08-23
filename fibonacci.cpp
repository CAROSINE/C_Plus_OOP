#include<iostream>
using namespace std;
int main()
{
    int n,i,num[25],sum=0;
    num[0]=0;
    num[1]=1;
    cout<<"how many number= ";
    cin>>n;
    for(i=2;i<n;i++)
    {
    num[i]=num[i-1]+num[i-2];
    }
    for(int i=0;i<n;i++)
    {
    cout<<num[i]<<" ";
    }
    return 0;
}
