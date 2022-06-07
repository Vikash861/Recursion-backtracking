#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int size, int target, int index = 0)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    return linearSearch(arr, size, target, index + 1);
}

// linear search with all ocurrence
vector<int> linearSearchwithAll(int *arr, int size, int target, vector<int> list, int index = 0)
{
    if (index == size)
    {
        return list;
    }
    if (arr[index] == target)
    {
        list.push_back(index);
    }
    return linearSearchwithAll(arr, size, target, list, index + 1);
}

// third way 
vector<int>allOccurenece(int *arr,int size,int target,int index){
    vector<int>list;
    if(arr[index] == target){
        list.push_back(index);
    }
    if(index == size){
        return list;
    }
    vector<int>temp = allOccurenece(arr,size,target,index + 1);
    list.push_back(temp[0]);
    return list;


}

int main()
{
    int arr[10] = {1, 4, 90, 90, 10, 16, 18, 20, 22, 25};
    int size = 10 - 1;
    // cout << linearSearch(arr, size, 90) << endl;
    vector<int> list1;
    vector<int> list = linearSearchwithAll(arr, size, 90, list1);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }
}