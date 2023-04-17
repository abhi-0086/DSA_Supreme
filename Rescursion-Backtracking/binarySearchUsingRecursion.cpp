#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int low, int high, int key)
{
    //base case
    //case1 -> low crossed high
    if(low > high)
        return -1;
    int mid = low + (high - low)/2;
    //case2 -> key found
    if(v[mid] == key)
        return mid;
    
    //agar arr[mid] < key -> right part me search
    if(v[mid] < key)
        return binarySearch(v, mid+1, high, key);
    //agar arr[mid] > key -> left part me search
    else
        return binarySearch(v, low, mid-1, key);
}

int main()
{
    vector<int> v{10 ,20, 34, 44, 56, 68, 89, 90, 112};
    int size = v.size();
    int low = 0;
    int high = size-1;
    int target = 90;
    int ans = binarySearch(v, low, high, target);
    if(ans != -1)
        cout << target << " is present at index " << ans << endl;
    else
        cout << target << " is not present in array" << endl;
    return 0;
}