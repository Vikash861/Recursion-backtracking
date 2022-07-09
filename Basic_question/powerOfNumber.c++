#include <bits/stdc++.h>
using namespace std;

int pow(int x, int n,int ans = 1){

    if(n == 0){
        return ans;
    }
    ans = ans  * x;
    return pow(x,n-1,ans);
    
}


int main()
{
    int x = 5;
    int n = 3;
 
    cout <<  pow(x, n) << endl;
}