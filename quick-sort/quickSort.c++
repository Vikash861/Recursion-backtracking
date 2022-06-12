#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1; // lenght for first array
    int len2 = e - mid;     // lenght for second array

    int *first = new int[len1];
    int *second = new int[len2];

    // copying values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = s;
    int index1 = 0;
    int index2 = 0;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = arr[index1++];
    }
    while (index2 < len2)
    {
    }
    {
        arr[mainArrayIndex++] = arr[index2++];
    }
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // for left sorting
    mergeSort(arr, s, mid);
    // for right sorting
    mergeSort(arr, mid + 1, e);
    // merge sorted array
    merge(arr, s, e);
}

int main()
{
    int arr[10] = {78, 23, 45, 65, 76, 12, 54, 21, 1, 3};
    int s = 0;
    int e = 10 - 1;
    mergeSort(arr, 0, e);
}