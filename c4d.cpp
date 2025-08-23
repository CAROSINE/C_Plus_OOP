#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            
        }

        int F[n+1];
        for(int i = 0; i <= n; i++)
        {
            F[i] = 0;
        }
        for(int i = 0; i < n; i++)
        {
            F[arr[i]]++;
        }
        int ans = -1;
        for(int i = 1; i <= n; i++)
        {
            if (F[i] >= 3)
            {
                ans = i;
                break;
        }   
        cout << ans << endl;
    }

    return 0;
}
