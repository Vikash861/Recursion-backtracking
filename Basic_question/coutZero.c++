#include<bits/stdc++.h>
using namespace std;


int helper(int n , int c = 0){
    if(n == 0){
        return c;
    }
    int rem = n % 10;
    if(rem == 0){
        return helper(n/10,c+1);
    }
    return helper(n/10,c);
}
int countZero(int n){

   return helper(n);
}


int main(){
cout << countZero(0220010);
}