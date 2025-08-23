#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N - 1);
    int sum = 0;
    for (int i = 0; i < N - 1; ++i)
    {
        cin >> A[i];
        sum += A[i];
    }
    int required = N * M - sum;
    if (required <= 0)
    {
        cout << 0 << endl;
    }
    else if (required > K)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << required << endl;
    }
    return 0;
}