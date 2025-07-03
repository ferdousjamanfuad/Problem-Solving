#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string track = "";
    int i = 0;
    while (i<=s.length())
    {
        track += s[i];
        i += 2;
    }
    sort(track.begin(), track.end());
    int count = 1;

    for (auto u : track)
    {
        cout << u;

        if (count < track.length())
        {
            cout << "+";
            count++;
        }
    }
    return 0;
}