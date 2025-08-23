#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   ofstream file("data.txt");
   file<<"Name:John Doe"<<endl;
   file<<"Age:35"<<endl;
   file<<"Occupation:Engineer"<<endl;
   file.close();
   cout<<"Data written to 'data.txt'"<<endl;
   return 0;
}
