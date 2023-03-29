#include<bits/stdc++.h>
using namespace std;

int search_odd_occuring(vector<int> v)
{
    int l = 0;
    int r = v.size()-1;
    int mid = l + (r - l)/2;
    while(l <=  r)
    {
        if(l == r)
            return l;
        if(mid % 2 == 0)//mid is even
        {
            if(v[mid] == v[mid+1])
                l = mid + 2;
            else
                r = mid;
        }
        else//mid is odd
        {
            if(v[mid-1] == v[mid])
                l = mid + 1;
            else
                r = mid - 1;
        }
        mid = l + (r - l)/2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1,1,2,2,3,3,4,4,5,4,4,2,2};
    int ans = search_odd_occuring(arr);
    if(ans == -1)
        cout << "No odd occuring element present." << endl;
    else
        cout << "Odd occuring element is " << arr[ans] << " and is present at index " << ans << endl;
    return 0;
}