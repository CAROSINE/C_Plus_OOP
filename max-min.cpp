#include<iostream>
using namespace std;
int main()
{
    int max(int x, int y);
    {
        int x=7,y=8,max;
        if(x<y)
            cout<<"max="<<y<<endl;
        else
            cout<<"max="<<x<<endl;
    }
    {
        int x=5,y=6,min;
        if(x<y)
            cout<<"min="<<x;
        else
            cout<<"min="<<y;
    }
}
