#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;

    cin >> a;
    int n = a;
    int sum = 0;
    while (n > 0)
    {
        int rem = n % 10;
        sum = sum * 10 + rem;
        n /= 10;
    }
    if (a == sum)
    {
        cout << a << " is a Palindrome num";
    }
    else
    {
        cout << a << " is not a Palindrome num";
    }
}