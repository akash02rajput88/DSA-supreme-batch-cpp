#include<iostream>
#include<vector>
using namespace std;


void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = start;
    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted array
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else 
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int *arr, int start, int end)
{
    //base case
    if(start >= end) return;

    int mid = (start + end) / 2;

    //left part short karna hai ab
    mergeSort(arr, start, mid);

    //right part sort karna hai
    mergeSort(arr, mid+1, end);

    //merge
    merge(arr, start, end);
}

int main()
{
    int arr[7] = {2, 5, 7, 3, 9, 5, 8};
    int n = 7;

    mergeSort(arr, 0, n-1);

    return 0;
}