#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int N;
    cin>>N;

    int hour= N/3600;
    int minute= (N%3600)/60;
    int second= N%60;

    cout<<hour<<":"<<minute<<":"<<second<<endl;
}