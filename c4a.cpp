#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int T=0; T<t; T++)
  {
     int n;
     cin>>n;
     int arr[n];
     for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    for (int i=0; i<n; i++)
    {
        if(arr[i]%2==1)
        {
          ans++;  
        }    
    }
    cout<<ans<<endl;
  }
}