#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
    }
    cout << m - (n - 1) << endl;
    return 0;
}
