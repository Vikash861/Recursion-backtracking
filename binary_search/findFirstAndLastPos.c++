#include <bits/stdc++.h>
using namespace std;

void helper(int *arr,int target,int s, int e, vector<int> &ans){
    if(s>e){
        return;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid] == target){
        if(arr[mid-1] == target){
            helper(arr, target, s, int mid-1,ans);
        }
        else{
            ans.push_back(mid);
        }
        if(arr[mid + 1] == target){
             helper(arr, target, mid+1, e, ans);
        }
        else{
            ans.push_back(mid);
        }
    }
    if(target < arr[mid]){
         helper(arr, target, s, int mid-1,ans);
    }
    helper(arr, target, mid+1, e, ans);
}

vector<int>searchInRange(int *arr,int target,int size){helper(arr, target, s, int mid-1,ans);

}

int main()
{
    int arr[4] = {1, 3, 3, 4};
    int target = 3 ;
    int size = 4;
    
}
