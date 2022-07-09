#include <bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr, int key, int size)
{
    if (size == 0)
        return false;
    if (size == 1 && arr[size - 1] == key)
        return true;
    if(arr[0] == key){
        return true;
    }  
    return linearSearch(arr+1, key, size-1);  
}

int main()
{
    int arr[5] = {23, 52, 79, 34, 2};
    int size = 5;
    int key = 0;
    if(linearSearch(arr, key, size)){
        cout << "Element Found" << endl;
    }
    else{
        cout << "Element not Found" << endl;
    }
}