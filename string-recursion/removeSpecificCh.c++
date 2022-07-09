#include <bits/stdc++.h>
using namespace std;

// first way using argument variable
void rmSpecificCh(string &up, string &p)
{
    if (up.empty())
    {
        cout << p;
        return;
    }
    if (up.at(0) == 'a')
    { // skiping
        up.erase(0, 1);
    }
    else
    {
        p += up.at(0);
        up = up.erase(0, 1);
    }
    rmSpecificCh(up, p);
}

// second way using pure recursive
string rmSpecificCh2(string up)
{
    if (up.empty())
    {
        return "";
    }
    char ch = up[0];
    if (ch == 'a')
    {
        return rmSpecificCh2(up.erase(0, 1));
    }
    else{
        return ch + rmSpecificCh2(up.erase(0,1));
    }

}


int main()
{
    string up = "baccada";
    string p = "";
    rmSpecificCh(up, p);
    rmSpecificCh2("baccada");
    return 0;
}