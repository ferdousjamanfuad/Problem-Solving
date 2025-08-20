#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> X >> Y;
        if (X + Y > 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}