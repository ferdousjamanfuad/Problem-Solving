#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 1;
    sort(s.begin(), s.end());

    for (int i = 0; i < s.size()-1; i++)
    {
        if (s[i]!=s[i+1])
    count++;
        else
            continue;
    }
    if (count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}