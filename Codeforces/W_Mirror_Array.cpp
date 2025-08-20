#include <bits/stdc++.h>
using namespace std;
int main()
{
    int M, N;
    cin >> M >> N;
    int arr[M][N];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> arr[i][j];
    for (int i = 0; i < M; i++)
    {
        for (int j = N - 1; j >= 0; j--)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}