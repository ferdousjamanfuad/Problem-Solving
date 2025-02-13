#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int count = 0;
    cin >> n;
    do
    {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            count++;
        }
        n = n / 10;
    } while (n > 0);
    if (count == 7 || count == 4)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
