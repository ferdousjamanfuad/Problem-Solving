#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T, X, Y;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int Z = 0;
        cin >> X >> Y;
        if (Y > X)
        {
            Z = Y - X;
        }
        cout << (Y-Z) + 2 * Z << endl;
    }
    return 0;
}