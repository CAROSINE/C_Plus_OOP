#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter three number ";
    cin>>x>>y>>z;
    if(x<y&&x<z)
    cout<<x<<" is the smallest number";
    else if(y<x&&y<z)
    cout<<y<<" is the smallest";
    else
    cout<<z<<" is the smallest number";
}