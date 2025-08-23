#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        int k;
        cin >> n >> k;
        if (n >= k && (n - k) % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << n - (k - 1) << "\n";
        }
        else if (n >= 2 * k && (n - 2 * k) % 2 == 0)
        {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << n - 2 * (k - 1) << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}