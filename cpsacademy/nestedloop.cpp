#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    // cin >> n;

    for (int i = 1; i < n; i++)
    {
        int sp = n - i;
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        int x = 2 * i - 1;
        for (int j = 1; j <= x; j++)
        {
            if (j == 1 || j == x)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        int sp = n - i;
        for (int j = 1; j <= sp; j++)
        {
            cout << " ";
        }
        int x = 2 * i - 1;
        for (int j = 1; j <= x; j++)
        {
            if (j == 1 || j == x)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
       *
     *   *
   *       *
 *           *
   *       *
     *   *
       *

*/