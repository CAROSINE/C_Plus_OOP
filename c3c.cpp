#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string dragonString;
    dragonString += 'L';
    for (int i = 0; i < N; ++i)
    {
        dragonString += 'o';
    }
    dragonString += 'n';
    dragonString += 'g';
    cout << dragonString << endl;
    return 0;
}