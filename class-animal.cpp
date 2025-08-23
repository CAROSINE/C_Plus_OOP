#include<iostream>
using namespace std ;
class Animal
{
public:
    void eat ()
    {
        cout<<"Eating Bread"<<endl;
    }
};
class Dog:public Animal
{
public:
    void eat()
    {
        cout<<"Eating Bread"<<endl;
    }
};
int main ()
{
    Dog y=Dog();
    y.eat();
    return 0;
}
class Vehicles
{
public:
    void moves()
    (
     cout<<"The vehicles moves"<<endl;
    )
};
