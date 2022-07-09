#include <bits/stdc++.h>
using namespace std;

void Pad(string p, string up)
{
    if (up == "")
    {
        cout << p << endl;
        return;
    }
    int digit = up.at(0) - 48;

    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = char('a' + i);
        Pad(p + ch, up.substr(1));
    }
}

/*
vector<string> Pad2(string p, string up)
{
    if (up == "") // "a","2"
    {
        vector<string>list;// = new vector<string>();
        list.push_back(p);
        return list;
    }
    int digit = up.at(0) - 48;
    vector<string>list2;// = new vector<string>();
    for (int i = (digit - 1) * 3; i < digit * 3; i++)
    {
        char ch = char('a' + i);
        vector<string>list3 =  Pad2(p + ch, up.substr(1));
        for (int i = 0; i < list3.size(); i++)
        {
        list2.push_back(list3[0]); 
        }
        
    }
    return list2;
}
*/

int main()
{
    // Pad("","12");
    vector<string>list = Pad2("","12");
    for(int i = 0; i < list.size(); i++){
        cout<< list[i] << endl;
    }
}