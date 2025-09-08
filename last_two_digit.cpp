#include<iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

     int mul1 = (a*b)%100;
     int mul2 = (c*d)%100;

     int digit = (mul1 * mul2) % 100;

     cout<<digit;
}