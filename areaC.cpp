#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float R,Area;
    const double pi = 3.141592653 ;
    cin>>R;
    Area= pi*R*R ;
    cout << fixed << setprecision(9) << Area ;
}