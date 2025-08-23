#include<iostream>
using namespace std;
int main ()
{
    int x,y,tempo;
    cout<<"enter two number ";
    cin>>x>>y;
    tempo=x;
    x=y;
    y=tempo;
    cout<<"X= "<<x<<endl;
    cout<<"y= "<<y<<endl;
}
