#include <iostream>
using namespace std;

bool isLiked(int num) 
{
    if (num % 3 == 0) 
    {
        return false;
    }
    if (num % 10 == 3) 
    {
        return false;
    }
    return true;
}

int findKthLiked(int k) 
{
    int count = 0;
    int num = 1;
    while (true) 
    {
        if (isLiked(num)) 
        {
            count++;
            if (count == k) 
            {
                return num;
            }
        }
        num++;
    }
}

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << findKthLiked(k) << endl;
    }
    return 0;
}