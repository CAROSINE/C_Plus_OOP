#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int base,exponent,result;
    cout<<"enter base: ";
    cin>>base;
    cout<<"enter exponent= ";
    cin>>exponent;
    result=(pow(base,exponent));
    cout<<"Result is= "<<result<<endl;
    return 0;
}
