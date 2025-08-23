#include<iostream>
using namespace std;
int main()
{
    int num1,num2,x1,x2,rem,GCD;
    cout<<"enter first number= ";
    cin>>num1;
    cout<<"enter second number= ";
    cin>>num2;
    x1=num1;
    x2=num2;
    while(x2!=0)
    {
    rem=x1%x2;
    x1=x2;
    x2=rem;
    }
    GCD=x1;
    cout<<"GCD is= "<<GCD<<endl;
}
