#include <iostream>
using namespace std;

int main() 
{
    long long A, B;
    cin >> A >> B;

    long long result = (A + B - 1) / B;

    cout << result << endl;
    return 0;
}
