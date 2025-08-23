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
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        long long a = sqrt(sum);
        if(a * a == sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
