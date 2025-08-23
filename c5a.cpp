#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int arr[3] = {A, B, C};
    sort(arr, arr + 3);
    int max_sum = arr[1] + arr[2];
    cout << max_sum << endl;
    return 0;
}
