#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int start, int end, int target)
{
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(v[mid] == target)
            return mid;
        if(v[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int unbounded_binary_search(vector<int> arr, int key)
{
    if(arr[0] == key) return 0;//present at first index
    int i = 1;//initialise i with 1
    while(i < arr.size() && arr[i] <= key)//move exponentialy ahead if arr[i] is less than key as key will be found ahead if present
    {
        i *= 2;
    }
    int start = i/2;
    int end = min(i, (int)arr.size()-1);
    int res = binarySearch(arr, start, end, key);
    return res;
}

int main()
{
    vector<int> nums = {1,3,5,6,7,9,12,13,15,23,56,78,90,112,123,200};
    int searchKey = 13;
    int ans = unbounded_binary_search(nums, searchKey);
    if(ans == -1)
        cout << searchKey << " is not present in the array." << endl;
    else
        cout << searchKey << " is present at index " << ans << endl;
    return 0;
}