#include<iostream>
using namespace std;
int main()
{
    int num,r,temp,sum=0;
    cout<<"enter any number ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
    }
    if(sum==num)
        cout<<num<<" is a palindrome number";
    else
        cout<<num<<" is not a palindrome";
    return 0;
}
