#include <bits/stdc++.h>
using namespace std;

void sortArray(int *arr,int n){
    if( n == 0 || n == 1){
        return;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1);
}

int main()
{
    int arr[5] = {4,5,6,1,2};
    int n = 5;
    sortArray(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    

}