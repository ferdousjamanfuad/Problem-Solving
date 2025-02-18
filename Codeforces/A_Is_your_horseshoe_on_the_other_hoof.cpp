#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(4);
    int count =0;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for (int i =1; i <arr.size(); i++)
    {
        if (arr[i-1] == arr[i])
            count++;
    }
    cout << count;
    return 0;
}