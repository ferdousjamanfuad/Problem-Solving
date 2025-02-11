#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum = sum + (k * i);
    }
    int debt = sum - n;
    if (debt > 0)
        cout << debt;
    else
        cout << 0;
    return 0;
}