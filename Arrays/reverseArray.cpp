#include <bits/stdc++.h>
using namespace std;
// function to take input in an array
void inputArray(int arr[], int size)
{
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
// function to print an array
void printArray(int arr[], int size)
{
    cout << "Printing array : ";
    for (int itr = 0; itr < size; itr++)
    {
        cout << arr[itr] << " ";
    }
    cout << endl;
}
// function to print in reverse manner
void reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start++], arr[end--]);
    }
}
int main()
{
    int arr[100], n;
    cout << "Enter the size of array required - ";
    cin >> n;
    inputArray(arr, n);
    cout << "Before reverse ";
    printArray(arr, n);
    reverseArray(arr, n);
    cout << "After reverse ";
    printArray(arr, n);
    return 0;
}