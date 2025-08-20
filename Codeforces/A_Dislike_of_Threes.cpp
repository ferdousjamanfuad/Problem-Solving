#include <iostream>
using namespace std;
int main()
{
    int t, num, count = 0;
    int k;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> k;
        num = 0;
        while (num < k)
        {
            count++;
            if (num % 3 == 0 || num % 10 == 3)
            {
                num++;
            }
        }
        cout << count;
    }

    return 0;
}