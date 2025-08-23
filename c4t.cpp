#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> counts(26, 0);
    
    for (char c : s)
    {
        counts[c - 'A']++;
    }
    
    int odd_count = 0;
    char odd_char = '\0';
    for (int i = 0; i < 26; ++i)
    {
        if (counts[i] % 2 != 0)
        {
            odd_count++;
            odd_char = 'A' + i;
        }
    }
    
    if (odd_count > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    string first_half;
    for (int i = 0; i < 26; ++i)
    {
        if (counts[i] > 0)
        {
            first_half.append(counts[i] / 2, 'A' + i);
        }
    }
    
    string palindrome = first_half;
    if (odd_count == 1)
    {
        palindrome += odd_char;
    }
    palindrome += string(first_half.rbegin(), first_half.rend());
    
    cout << palindrome << endl;
    
    return 0;
}