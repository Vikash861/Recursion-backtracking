#include <bits/stdc++.h>
using namespace std;

int sum = 0;
void reverseNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    sum = (sum * 10) + (n % 10);
    reverseNumber(n / 10);
}



int main()
{
    reverseNumber(123);
    cout << sum << endl;
}