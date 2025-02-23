#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> s(t);
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];

        for (char &ch : s[i])
        {
            ch = toupper(ch);
        }
        if (s[i] == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
