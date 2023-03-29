#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> v, int key)
{
    int start = 0;
    int end = v.size()-1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(v[mid] == key)
            return mid;
        if(mid-1 >= start && v[mid-1] == key)
            return mid-1;
        if(mid+1 <= end && v[mid+1] == key)
            return mid+1;
        if(key > v[mid])
            start = mid + 2;
        else
            end = mid - 2;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {10,3,40,20,50,80,70};
    int target = 40;
    int ans = binarySearch(arr, target);
    if(ans != -1)
        cout << target << " is presnt at index " << ans << endl;
    else
        cout << "Element not present in array!" << endl;
    return 0;
}