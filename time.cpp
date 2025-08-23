#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct Casino 
{
    int l, r, real;
};

void solve() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<Casino> casinos(n);
        for (int i = 0; i < n; ++i) 
        {
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        }
       
        sort(casinos.begin(), casinos.end(), [](const Casino& a, const Casino& b) 
        {
            return a.l < b.l;
        });
        
        priority_queue<pair<int, int>> pq;
        int res = k;
        int ptr = 0;
        
        while (true) 
        {
            while (ptr < n && casinos[ptr].l <= k) 
            {
                pq.emplace(casinos[ptr].real, casinos[ptr].r);
                ptr++;
            }
            
            if (pq.empty()) break;
            
            auto [real, r] = pq.top();
            pq.pop();
            
            if (k > r) continue;
            
            k = real;
            res = max(res, k);
        }
        
        cout << res << '\n';
    }
}

int main()
{
    solve();
    return 0;
}