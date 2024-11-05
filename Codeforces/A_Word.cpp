#include <iostream>
#include <string>
using namespace std;
int main()
{
    int count = 0;
    string S;
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] < 'a')
            count++;
    }
    // make uppercse
    if (count > S.length() / 2)
    {
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i]>= 'a' && S[i] <= 'z')
                S[i] = S[i] - 32;
        }
    }
    else // make lowercase
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i]>= 'A' && S[i] <= 'Z')
             S[i] = S[i] + 32;
        }
    cout << S;

    return 0;
}