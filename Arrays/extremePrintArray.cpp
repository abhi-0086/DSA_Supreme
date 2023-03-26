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
}
// function to print extreme a array
void printExtreme(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        if (start == end)
            cout << arr[start++] << " ";
        else
            cout << arr[start++] << " " << arr[end--] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[1000], n;
    cout << "Enter the size of array required - ";
    cin >> n;
    inputArray(arr, n);
    printExtreme(arr, n);
    return 0;
}