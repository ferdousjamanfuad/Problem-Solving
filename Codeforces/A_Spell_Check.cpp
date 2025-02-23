#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    vector<string> v;
    for (int i = 0; i < t; i++)
    {
        cin >> n; // number of char in a string
        string s;
        cin >> s;
        v.push_back(s);
    }
    for (string &str : v)
    {
        sort(str.begin(), str.end()); // Timru
      
        if (str == "Timru")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
