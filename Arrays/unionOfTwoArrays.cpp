// here we have assume that the array do not contain common elemnts

#include <bits/stdc++.h>
using namespace std;
// function to take input array
void inputArray(vector<int> &arr, int size)
{
    cout << "Enter array elements : ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}
// function to print array
void printArray(vector<int> &arr)
{
    cout << "Printing array : ";
    for (int itr = 0; itr < arr.size(); itr++)
    {
        cout << arr[itr] << " ";
    }
}

int main()
{
    int a[] = {2, 4, 6, 8};
    int b[] = {1, 3, 7};
    int sizeA = 4;
    int sizeB = 3;
    vector<int> ans;
    // place all element of a in ans
    for (int i = 0; i < sizeA; i++)
    {
        ans.push_back(a[i]);
    }
    // place all element of b in ans
    for (int i = 0; i < sizeB; i++)
    {
        ans.push_back(b[i]);
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}