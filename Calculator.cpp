#include<iostream>
using namespace std ;
int main()
{
    int x,y,S;
    char op;
    cin>>x>>op>>y;
    if(op == '+')
    S=x+y;
    else if(op == '-')
    S=x-y;
    else if(op == '*')
    S=x*y;
    else if(op == '/')
    S=x/y;
    else{
         cout<<"Invalid operator!";
         return 0;
        }
    cout<<S;
}