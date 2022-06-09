#include <bits/stdc++.h>
using namespace std;

void tringle(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        cout << "* ";
        tringle(r, c + 1);
    }
    else
    {
        cout << endl;
        tringle(r - 1, c = 0);
    }
}

void tringle2(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        tringle2(r, c + 1);
        cout << "* ";
    }
    else
    {
        tringle2(r - 1, c = 0);
        cout << endl;
    }
}

void bubbleSort(int *arr, int r, int c)
{

    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        if (arr[c] > arr[c + 1])
        {
            swap(arr[c], arr[c + 1]);
        }
        bubbleSort(arr, r, c + 1);
    }
    else
    {
        bubbleSort(arr, r - 1, c = 0);
    }
}

void selectionSort(int *arr, int i, int j, int max = 0)
{
    if (i == 0)
    {
        return;
    }
    if (j < i)
    {
        if (arr[j] > arr[max])
        {
            selectionSort(arr, i, j + 1, max + 1);
        }
        else
        {
            selectionSort(arr, i, j + 1, max);
        }
    }
    else
    {
        if (arr[i] < arr[max]) //problem was here beccause max was whole value i have to compare max, but now max is a index
        {
            swap(arr[j], arr[max]);
        }
        selectionSort(arr, i - 1, j = 0);
    }
}

int main()
{
    // tringle2(4, 0);
    int arr[4] = {2, 3, 67, 1};
    // bubbleSort(arr,4,0);
    selectionSort(arr, 3, 0);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
}
