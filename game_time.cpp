#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    if(x==0 && y==0)
    {
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
    }
    else if(x>=y)
    {
        cout<<"O JOGO DUROU "<<(24-x)+y<<" HORA(S)"<<endl;
    }
    else if(x<y)
    {
        cout<<"O JOGO DUROU "<<y-x<<" HORA(S)"<<endl;
    }
}