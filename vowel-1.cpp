#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any character : ";
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
    cout<<"Character is a Vowel"<<ch<<endl;
    }
    else
    {
    cout<<"Character is a Consonant";
    }
}
