#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int arr[N], temp[K];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int i = 0; i < K; i++)
        temp[i] = arr[N - K + i];
    for (int i = N - 1; i >= K; i--)
        arr[i] = arr[i - K];
    for (int x = 0; x < K; x++)
        arr[x] = temp[x];

    for (int z = 0; z < N; z++)
        cout << arr[z] << " ";
    return 0;
}