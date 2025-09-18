#include<iostream>
#include<iomanip>
#include<cmath>
#define pi 3.14159 
using namespace std;
int main()
{
  double r,volume;
  cin>>r;

  volume=((4.0/3)*pi*pow(r,3));
  cout<<fixed<<setprecision(3)<<"VOLUME = "<<volume<<endl;
}