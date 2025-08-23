#include<iostream>
using namespace std;
void display(int *x)
{
*x=30;
}
int main ()
{
    int x=20;
    display(&x);
    cout<<"x="<<x;
    return 0;
}
