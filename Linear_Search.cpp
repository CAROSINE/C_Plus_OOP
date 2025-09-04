#include<iostream>
using namespace std;
int main()
{
    int n,i,key;
    int found=0;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter"<<" "<<n<<" elements: ";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Enter the elements to search: ";
    cin>>key;

    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"Element"<<" "<<key<<" "<<"found at index"<<" "<<i;
            found=1;
            break;
        }
    }
    if(!found)
    {
        cout<<"Element"<<" "<<key<<" "<<"not found the array";
    }
}