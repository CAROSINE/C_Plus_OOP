#include <iostream>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    int total = 0;
    for (int i = 0; i < N; ++i)
    {
        int score;
        cin >> score;
        if (score <= X)
        {
            total += score;
        }
    }

    cout << total << endl;
    return 0;
}