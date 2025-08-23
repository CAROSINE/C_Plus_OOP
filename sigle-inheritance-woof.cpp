#include<iostream>
using namespace std;
class Animal
{
public:
    string name;
    int age;
};
class Dog: public Animal
{
  public:
      void bark()
{
  cout<<"Woof! gagagaag"<<endl;
}
};
int main()
{
    Dog d;
    d.name="Buddy";
    d.bark();
    return 0;
}
