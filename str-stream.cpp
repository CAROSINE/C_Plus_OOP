#include<iostream>
using namespace std;
void print_string(string s)
{
    cout<<"passing string to function is: "<<s<<endl;
    return ;
}
int main ()
{
    string s ="Geeks for Geeks";
    print_string(s);
    return 0;
}
