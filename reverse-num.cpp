#include <iostream>
using namespace std;
int main()
{
    int num, r, temp, sum = 0; // Initialize sum to 0
    cout << "Enter any number: ";
    cin >> num;
    temp = num;
    while (temp != 0)
        {
        r = temp % 10;
        sum = sum * 10 + r;
        temp = temp / 10;
        }
    cout << "Reverse digit is: " << sum << endl;
    return 0;
}
