#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, x=-1;//x=random number for the first iteration
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        if (a != x)
            count++;
        x = a;
    }
    cout << count;
    return 0;
}
