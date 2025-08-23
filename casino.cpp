#include <iostream>
#include <vector>

using namespace std;

int maxHikes(int n, int k, const vector<int>& a) 
{
    int hikes = 0;
    int i = 0;
    
    while (i <= n - k) 
    {
        bool canHike = true;
        for (int j = 0; j < k; ++j) 
        {
            if (a[i + j] != 0) 
            {
                canHike = false;
                break;
            }
        }
        
        if (canHike) 
        {
            hikes++;
            i += k;
            i++;      
        } else 
        {
            i++;
        }
    }
    
    return hikes;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
        }
        cout << maxHikes(n, k, a) << '\n';
    }
    
    return 0;
}