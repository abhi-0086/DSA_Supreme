#include<bits/stdc++.h>
using namespace std;

//recursive function to check if array is sorted in acsending order or not
bool is_sorted(vector<int> arr, int size, int ind)
{
    //base case
    if(ind == size-1)
        return true;
    
    //processing
    if(arr[ind+1] < arr[ind])
        return false;
    
    //recursive call
    return is_sorted(arr, size, ind+1);
}

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter elemnts : ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    if(is_sorted(v, n, 0))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}