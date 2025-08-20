#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N][N];
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                sum1 += arr[i][j];
            if (i + j == N - 1) // cz of 0 indxing
                sum2 += arr[i][j];
        }
    }
   // cout << sum1 << " " << sum2 << endl;
    cout << abs(sum1 - sum2);

    return 0;
}