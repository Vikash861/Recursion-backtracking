#include<bits/stdc++.h>
using namespace std;

// first way
bool isArrSorted(int *arr, int size, int s=0){
    if(s == size){
        return true;
    }
    if(arr[s]>arr[s+1]){
        return false;
    }
    return isArrSorted(arr,size,s+1);

}

// second way 
bool isArrSorted2(int *arr, int size, int index=0){
        if(index == size){
        return true;
    }
    return arr[index]<arr[index+1] && isArrSorted2(arr,size,index + 1);

}

int main(){
    int arr[10] = {1,4,90,8,10,16,18,20,22,25};
    int size = 10-1;
    if(isArrSorted2(arr,size)){
        cout << "array is sorted" << endl;
    }
    else{
        cout << "array is not sorted" << endl;
    }
}