#include<iostream>
using namespace std;
int main()
{
  long long num1;
  long long num2;
  long long Sum;
  cin>>num1>>num2;
  long long x = num1 % 10;
  long long y = num2 % 10;
  Sum= x + y;
  cout<<Sum;
}