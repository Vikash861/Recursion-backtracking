#include <bits/stdc++.h>
using namespace std;

int helper(int * arr, int key,int s, int e){
    if(s > e){
        return -1;
    }
    // calculatin mid
    int mid = s + (e - s) / 2;
    // base case 

    if(arr[mid] == key){
        return mid;
    }
    if(key < arr[mid]){

        return helper(arr,key,s,mid-1);
    }
    else{
        return helper(arr,key,mid + 1, e);
    }


}

int binarySearch(int * arr, int key, int size){
    int s = 0;
    int e = size-1;
    return helper(arr,key,s,e);
}

int main()
{
    int arr[5] = {1,9,11,17,32};
    int key = 0;
    int size = 5;
    if(binarySearch(arr,key,size) >=0 ){
        cout << "The element is exist" << endl;
    }
    else{
        cout << "The element is not exist" << endl;
    }
}