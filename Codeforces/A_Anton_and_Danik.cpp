#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i <n; i++)
    {
        if (s[i] == 'A')
            count++;
        else
            count--;
    }
    if (count > 0)
        cout << "Anton";
    else if (count < 0)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}