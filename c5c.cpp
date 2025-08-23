#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string S;
    cin >> S;

    set<string> valid = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
    if (valid.count(S))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}