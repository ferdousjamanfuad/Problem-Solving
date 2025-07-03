#include <bits/stdc++.h>
using namespace std;
bool is_composite(int n)
{
    if (n <= 1)
        return false; 
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return true; 
    }
    return false; 
}
int main()
{
    int n;
    cin >> n;
    int fir = 4;
    int sec = n - fir;

    for (int i = 0; i <= n / 2; i++)
    {
        if (is_composite(fir) && is_composite(sec))
        {
            cout << fir << " " << sec << endl;
            return 0;
        }
        else
        {
            fir++;
            sec--;
        }
    }
}