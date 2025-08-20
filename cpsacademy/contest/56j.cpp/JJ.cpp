#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int p[105];
        for (int i = 0; i < n; i++)
            cin >> p[i];

        int count = 0;
        for (int i = 0; i < k; i++)
        {
            if (p[i] <= k)
                count++;
        }
        cout << k - count << endl;
    }
    return 0;
}
