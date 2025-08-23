#include<iostream>
using namespace std;
int main()
{
    int x,y,z,sum,sum1,sum2,sum3;
    cin>>x>>y>>z;
    x=y;
    y=z;
    z=x;
    sum1=x+y+z;

    x=z;
    y=x;
    z=y;
    sum2=x+y+z;

    x=y;
    y=z;
    z=x;
    sum3=x+y+z;

    sum=sum1+sum2+sum3;
    cout<<sum<<endl;
}