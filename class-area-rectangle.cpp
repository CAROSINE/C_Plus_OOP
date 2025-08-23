#include<iostream>
using namespace std;
class Rectangle
{
  int length,breadth;
  public:
    Rectangle(int l,int b)
    {
     length=l;
     breadth=b;
    }
     int area()
     {
         return length*breadth ;
     }
     void display()
     {
         cout<<"The area of the rectangle is "<< area()<< endl;
     }
};
 int main()
   {
       Rectangle r1(7,11);
       r1.display();
       return 0 ;
}
