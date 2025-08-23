#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> h[i];
        }
        k--; 
        
        int max_h = *max_element(h.begin(), h.end());
        if (h[k] == max_h) {
            cout << "YES\n";
            continue;
        }
        
        bool possible = false;
        for (int i = 0; i < n; ++i) {
            if (h[i] == max_h && h[i] > h[k]) 
            {
                if (h[i] - h[k] > i - k) 
                {
                    possible = true;
                    break;
                }
            }
        }
        
        cout << (possible ? "YES\n" : "NO\n");
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}