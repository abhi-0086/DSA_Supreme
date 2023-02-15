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
// function to count no of 0's and 1's
void countZeroAndOne(int arr[], int size)
{
    int countZero = 0, countOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            countZero++;
        else if (arr[i] == 1)
            countOne++;
    }
    cout << "Count of 0's is " << countZero << " and Count of 1's is " << countOne << endl;
}
int main()
{
    int arr[1000], n;
    cout << "Enter the size of array required - ";
    cin >> n;
    inputArray(arr, n);
    countZeroAndOne(arr, n);
    return 0;
}