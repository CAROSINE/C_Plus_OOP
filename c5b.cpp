#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
    }
    int max_other = *max_element(P.begin() + 1, P.end());
    int extra = max(0, max_other - P[0] + 1);
    cout << extra << endl;
    return 0;
}