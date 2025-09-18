#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x,y,z,area,perimetro;
    cin>>x>>y>>z;

    if(x+y>z && x+z>y && y+z>x)
    {
        perimetro  = x+y+z;
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<perimetro<<endl;
        return 0;
    }
    else
    {
        area = ((x+y)/2)*z;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }
}