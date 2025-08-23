#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{ 
    double r,area,circumference;
    const double pi=acos(-1.0);
    cin>>r;
    area=pi*r*r;
    circumference=2*pi*r;
    cout<<fixed<<setprecision(6)<<area<<" "<< circumference<<endl;
    return 0;
}