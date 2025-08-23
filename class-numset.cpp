#include<iostream>
using namespace std;
class student
{
 public:
     int rollnumber;
     long long phonenumber;
     string address;
     string name;

     void setdata (string studentname,int roll,long long phone,string adres)
     {
        name = studentname;
        rollnumber=roll;
        phonenumber=phone;
        address=adres;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number:"<<rollnumber<<endl;
        cout<<"Phone Number:"<<phonenumber <<endl;
        cout<<"Address:"<<address <<endl<<endl;
    }
};
   int main()
   {
       student s1;
       student s2;
       s1.setdata("Sam",101,1234567890,"456 Maple Ave");
       s2.setdata("John",102,9876543210,"456 Maple Ave");
       s1.display();
       s2.display();
       return 0;
   }
