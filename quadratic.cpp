#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    double a,b,c,d,X1,X2;
    cout<<"enter three number: ";
    cin>>a>>b>>c;
    if((a==0.0)||((b*b)-4*a*c)<0)
    cout<<"imaginary number";
    else
    {
       d=sqrt((b*b)-4*a*c);
       X1=(-b+d)/(2*a);
       X2=(-b-d)/(2*a);
       cout<<"X1 is = "<<X1<<endl;
       cout<<"X2 is = "<<X2;
    }
    return 0;
}
