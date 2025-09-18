#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int time,speed;
    cin>>time>>speed;

    double fuel_spent=(time*speed)/ 12.0;

    cout<<fixed<<setprecision(3)<<fuel_spent<<endl;
}