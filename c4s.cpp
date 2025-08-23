#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char s[n+1];
  cin>>s;
  int maxfreq[26];
  for(int i=0; i<26; i++)
  {
    maxfreq[i] = 0;
  }
  int currentfreq=1;
  for(int i=1; i<n; i++)
  {
    if(s[i]==s[i-1])
    {
      currentfreq++; 
    }
    else
    {
     if(maxfreq[s[i-1]-97]<currentfreq)
     {
        maxfreq[s[i-1]-97]=currentfreq;
     }
     currentfreq=1;
    }
  }
  if(maxfreq[s[n-1]-97]<currentfreq)
  {
    maxfreq[s[n-1]-97]=currentfreq;
  }
  int ans=0;
  for(int i=0; i<26; i++)
  {
    ans+=maxfreq[i];
  }
  cout<<ans<<endl;
  return 0;
}