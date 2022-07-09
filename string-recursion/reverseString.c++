#include <bits/stdc++.h>
using namespace std;

void helper(string &str, int s, int e)
{
    if (s > e)
        return;
    swap(str[s], str[e]);
    s++;
    e--;
    helper(str, s, e);
}

void reverseString(string &str)
{
    int s = 0;
    int e = str.length() - 1;
    helper(str, s, e);
}

int main()
{
    string name = "vikash";
    cout << name << endl;
    reverseString(name);
    cout << name << endl;
}