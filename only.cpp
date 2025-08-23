#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int findSmallestY(int x) 
{
    unordered_set<char> digits;
    string x_str = to_string(x);
    for (char c : x_str) 
    {
        digits.insert(c);
    }
    
    for (int y = 0; y <= 1000; y++) 
    {
        string y_str = to_string(y);
        for (char c : y_str) {
            if (digits.find(c) != digits.end()) 
            {
                return y;
            }
        }
    }
    
    return -1;
}

int main() 
{
    int t;
    cin >> t;
    
    while (t--) 
    {
        int x;
        cin >> x;
        cout << findSmallestY(x) << endl;
    }
    
    return 0;
}