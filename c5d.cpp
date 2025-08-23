#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    unordered_set<string> target = {"and", "not", "that", "the", "you"};
    string word;
    bool found = false;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> word;
        if (target.count(word))
        {
            found = true;
            break;
        }
    }
    cout << (found ? "Yes" : "No") << endl;
}
