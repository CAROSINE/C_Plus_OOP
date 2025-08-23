#include<iostream>
using namespace std;
class Cal
{
public:
    static float add(float a,float b)
    {
        return a+b;
    }
    static float add(float a,float b,float c)
    {
        return a+b+c;
    }
};
int main()
{
    Cal C;
    cout<<C.add(10,2.10)<<endl;
    cout<<C.add(10,20,25.50);
    return 0;
}
