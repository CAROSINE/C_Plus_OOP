#include<iostream>
using namespace std;
int main()
{
    int x,y,left=0;
    cin>>x>>y;
    while(x>=0)
    {
        x=x-y;
        left++;
    }
    cout<<left<<endl;
    return 0;
}