#include <bits/stdc++.h>
using namespace std;

string digit[10] = {"zero", "one","two","three","four","five","six","seven","eight","nine"};

void sayCount(int n){
    if(n == 0){
        return;
    }
    int num = n % 10;
    n = n / 10;
    sayCount(n);
    if( n < 10){
        cout << digit[n] << endl;
    }
    else{
    int n = n % 10;
    cout << digit[num] << endl;

    }
}

int main()
{
    int num = 412;
    sayCount(num);
}