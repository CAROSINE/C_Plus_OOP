#include<iostream>
using namespace std;
int main ()
{
    int n,i,factorial=1;
    cout<<"enter a number= ";
    cin>>n;
    for(i=1;i<=n;i++)
    factorial=factorial*i;
    cout<<"Factorial is= "<<factorial;
    return 0;
}
