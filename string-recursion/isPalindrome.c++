#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i, int j){
    if(i > j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    return isPalindrome(str,i+1,j-1);
}


int main()
{
    string str = "igi";
    int i = 0;
    int j = str.length()-1;
    if(isPalindrome(str, i, j)){
        cout << "String is palindrome";
    }
    else{
        cout << "String is not palindrome";
    }
}