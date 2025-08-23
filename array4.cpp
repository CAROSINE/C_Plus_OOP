#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10, 20, 30, 40, 50};
    cout<<arr[-1]<<endl;
    cout<<arr[5]<<endl;
}//this code print garbage values because it accesses out of bounds elements of the array.