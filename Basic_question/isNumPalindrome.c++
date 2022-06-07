#include<bits/stdc++.h>
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

bool isPalindrome(int n){
    reverseNumber(n);
    return (n == sum);
}

int main(){
    if(isPalindrome(121)){
        cout << "yes it is palindrome" << endl;
    }
    else{
        cout << "it is not a palindrome number" << endl;
    }
}