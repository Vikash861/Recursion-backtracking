#include <bits/stdc++.h>
using namespace std;

void subseq(string p, string up){
    if(up.empty()){
        cout << p << endl;
        return;
    }
    char ch = up[0];
    subseq(p + ch, up.erase(0, 1));
    subseq(p, up);
}


int main()
{
    subseq("","abc");
    
}