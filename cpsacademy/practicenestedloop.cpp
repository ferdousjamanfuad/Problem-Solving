#include <bits/stdc++.h>
using namespace std;
void prime() // prime number
{
    int n, flag;
    // cout << "enter number to chk prime:" << endl;
    cout << "prime range " << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        flag = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
                flag = 1;
        }
        if (flag == 0)
            cout << i << " is prime" << endl;
        else
            cout << i << " is not prime" << endl;
    }
}
void palindrome() // chk palindrome
{
    int n, number, digit, reverse = 0;
    cout << "enter number to chk palindrome " << endl;
    cin >> n; // 121
    number = n;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        reverse = 10 * reverse + digit;
    }
    if (number == reverse)
        cout << "palindrome" << endl;
    else
        cout << "not palindrome";
}

void combination() // different combinations
{
    int n = 4, count1 = 0, count2 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                if (i == j && i != k)
                    count1++;
                if (i == k && i != j)
                    count1++;
                if (j == k && i != j)
                    count1++;
                if (i == j && j == k) // 3 same
                    count2++;
                // cout << "(" << i << " " << j << " " << k << ")" << endl;
            }
        }
    }
    cout << "two same digit " << count1 << endl;
    cout << "three same digit " << count2 << endl;
}
int main()
{
    int choice;
    cout << "enter choice: ";
    cin >> choice;
    if (choice == 1)
        combination(); // pb 1
    else if (choice == 2)
        palindrome(); // pb 2
    else if (choice == 3)
        prime(); // pb 3

    return 0;
}