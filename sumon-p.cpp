#include<iostream>
using namespace std ;
class Personalinfo
{
private:
    int id;
public:
    void getinfo (){
    cout <<"Enter ID:";
    cin>> id;
    cout<<"Id:"  <<id<< endl;
    }
};
class Subjectinfo{
private:
    string subject;
public:
    void getsubject(){
    cout<<" Enter Sub:";
    cin>> subject;
    cout<<"subject: "<<subject << endl;
    }
    };
    class Teacher:
    public Personalinfo,
    public Subjectinfo{};

    int main()
    {
        Teacher teacherObj;
        teacherObj.getinfo();
        teacherObj.getsubject();
        return 0;
    }
