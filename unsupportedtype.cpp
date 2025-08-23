#include<iostream>
using namespace std;
int main()
{
     int n, x, i;
    cin >> n;
    int A[100];
    for(i = 0; i < n; i++)
        cin >> A[i];
    cin >> x;
    bool found = false;
    for(i = 0; i < n; i++)
    { 
        if(A[i] == x)
            found = true;
    }
    if(found)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}