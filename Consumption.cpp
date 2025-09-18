#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int X;
    double Y,consumption;
    cin>>X>>Y;
    consumption=X/Y;

    cout<<fixed<<setprecision(3)<<consumption<<" km/l"<<endl;
}