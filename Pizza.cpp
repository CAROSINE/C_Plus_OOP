#include<iostream>
using namespace std;
int main()
{
    int n,f=0;
    double get,leftover;
    cin>>n >>f;
    f=f+1;
    get = n/f;
    leftover = n%f;
    cout<<get<<" "<<leftover;
    
}