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
// function implementing linear search
bool linearSearch(int arr[], int size, int target)
{
    for (int itr = 0; itr < size; itr++)
    {
        if (arr[itr] == target)
            return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter size of array required - ";
    cin >> n;
    int arr[1000];
    inputArray(arr, n);
    int target;
    cout << "Enter the element to be searched - ";
    cin >> target;
    bool flag = linearSearch(arr, n, target);
    if (flag)
        cout << target << " present isn array." << endl;
    else
        cout << target << " not present in array" << endl;
    return 0;
}