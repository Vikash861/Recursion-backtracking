#include <bits/stdc++.h>
using namespace std;

char solve(char *letters, char target, int s, int e, int len){
    if(s>e){
        return letters[s%len];
    }
    int mid = s + (e - s) / 2;

    if(target < letters[mid]){
        return solve(letters,target,s,mid-1,len);
    }

    return solve(letters,target,mid+1,e,len);


}

char smallestLetterGreaterthenTraget(char *letters,char target,int size){
    int s = 0;
    int e = size - 1;
    int ans = solve(letters, target,s,e,size);
    return ans;
}

int main()                              
{                                       
    char letters[3] = {'c','f','g'};
    char target = 'c';
    int size = 3;
    char ans = smallestLetterGreaterthenTraget(letters,target,size);
    cout << ans << endl;
}