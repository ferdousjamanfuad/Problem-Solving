#include<iostream>
using namespace std;
int main()
{
    int t, k;
    int count[100] = {0};
    cout << "enter test case:";
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            count[i]++;

            if (j % 3 == 0)
                count[i]++;
            else if (j % 10 == 3)
                count[i]++;
        }
    }
    for (int i = 0; i < t; i++)
        cout << count[i] << endl;
    return 0;
}