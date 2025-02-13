#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    do
    {
        int rem = n % 10;
        if (rem != 4 && rem != 7)
        {
            cout << "NO";
            return 0;
        }
        n = n / 10;
    } while (n > 0);
    cout << "YES";
    return 0;
}
