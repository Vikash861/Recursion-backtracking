#include <bits/stdc++.h>
using namespace std;

int search(int *arr,int target, int s, int e){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(target == arr[mid]){
        return mid;
    }
    if(arr[s]<arr[mid]){
        if(target>=arr[s] && target<=arr[mid]){
            return search(arr,target,s,mid-1);
        }
        else{
            return search(arr,target,mid+1,e);
        }
    }
    if(target>=arr[mid] && target<= arr[e]){
        return search(arr,target,mid+1,e);
    }
    else{
        return search(arr,target,s,mid-1);
    }
    
}

int main(){
int arr[7] = {6,12,87,98,102,1,4};
cout << search(arr,1,0,6) << endl;

}

// 3, 4 ,5, 1 ,2
// 6,8,1,2,3,4,5
// 8,1,2,3,4,5,6