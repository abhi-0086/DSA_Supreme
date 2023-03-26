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
// function to find maximum element in an array
int maxElement(int arr[], int size)
{
    int max = INT_MIN;
    for (int itr = 0; itr < size; itr++)
    {
        if (arr[itr] > max)
            max = arr[itr];
    }
    return max;
}

int main()
{
    int arr[1000], n;
    cout << "Enter the size of array required : ";
    cin >> n;
    inputArray(arr, n);
    int ans = maxElement(arr, n);
    cout << "Maximum elemnt in array = " << ans << endl;
    return 0;
}