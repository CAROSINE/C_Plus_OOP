#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> distinct;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        distinct.insert(x);
    }

    cout << distinct.size() << endl;
    return 0;
}
