#include <bits/stdc++.h>
using namespace std;

void permutaion(string p, string up){
    if(up.empty()){
        cout << p << endl;
        return;
    }
    char ch = up.at(0);
    for(int i=0; i<= p.length(); i++){
        string f = up.substr(0,i);
        string s = up.substr(i,p.length());
        permutaion(f+ch+s,up.substr(1));
    }
}

int main()
{
    // cout << "This is file name" << endl;
    permutaion("","abc");

}