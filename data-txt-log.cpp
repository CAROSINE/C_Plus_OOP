#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("numbers.txt");
    file<<10<<endl;
    file<<20<<endl;
    file<<30<<endl;
    file<<40<<endl;
    file.close();
cout<<"Data written to'number.txt'"<<endl;
ifstream infile("number.txt");
int number, sum=0;
while(infile>>number)
{
    sum+=number;
}
 infile.close();
 cout<<"The sum of the integer is:"<<sum<<endl;
return 0;
}
