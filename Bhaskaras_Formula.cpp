#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x,y,z,root1,root2,determinant;
    cin>>x>>y>>z;

    if( x == 0 )
    {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }

    
    if(determinant<0)
    {
        cout<<"Impossivel calcular"<<endl;
        return 0;
    }

    determinant = pow(y,2)-4*x*z;
    
    root1= (-y + sqrt(determinant)) / (2*x);
    root2= (-y - sqrt(determinant)) / (2*x);

    cout<<fixed<<setprecision(5)<<"R1 = "<<root1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<root2<<endl;
    return 0;
}