#include <bits/stdc++.h>
using namespace std;


int helper(int r, int n){
    if(n == 0){
        return 1;
    }
    return r * helper(r,n-1);

}

int ntTermOf_GP(int n, int a, int r){
    return a * helper(r,n-1);
}

int main()
{
    int ans = ntTermOf_GP(34, 17, 13,); // 8
    cout << ans << endl;
    // cout << helper(2,4);
}