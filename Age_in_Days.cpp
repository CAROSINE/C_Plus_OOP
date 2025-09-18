#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int d;
    cin>>d;

    int year= d/365;
    int month= (d%365)/30;
    int day= (d%365)%30;

    cout<<year<<" ano(s)"<<endl;
    cout<<month<<" mes(es)"<<endl;
    cout<<day<<" dia(s)"<<endl;
}