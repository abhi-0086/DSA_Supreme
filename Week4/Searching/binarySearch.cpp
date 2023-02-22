#include <bits/stdc++.h>
using namespace std;

// function to take input array
void inputArray(int arr[], int size)
{
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
// function to print array
void printArray(int arr[], int size)
{
    cout << "Printing array : ";
    for (int itr = 0; itr < size; itr++)
    {
        cout << arr[itr] << " ";
    }
}

// function for binary search

int main()
{
    int n;
    cin >> n;
    int arr[100];
    inputArray(arr, n);

    return 0;
}