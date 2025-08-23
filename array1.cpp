#include<iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]); // total elements
    int x = 6;
    for(int i = 0; i  < n; i++) 
    {
        if(arr[i]==x)
        cout<<"Yes"<<endl;
        else
         cout<<"No"<<endl;
    }

    return 0;
}
