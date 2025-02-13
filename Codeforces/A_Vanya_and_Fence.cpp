#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, width = 0;
    cin >> n >> h;
    vector<int>vec(n);//put n elements in vector constructr to determine n element initially
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];

        if (vec[i] > h)
            width = width + 2;
        else
            width = width + 1;
    }
    //if ever need more elements beyond n simply use vec.push_back() to append the value and increase size by 1
    cout << width;
    return 0;
}