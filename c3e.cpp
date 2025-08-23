#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxQuality = -1;
        int winnerIndex = -1;

        for (int i = 1; i <= n; ++i)
        {
            int a, b;
            cin >> a >> b;
            if (a <= 10 && b > maxQuality)
            {
                maxQuality = b;
                winnerIndex = i;
            }
        }

        cout << winnerIndex << endl;
    }

    return 0;
}