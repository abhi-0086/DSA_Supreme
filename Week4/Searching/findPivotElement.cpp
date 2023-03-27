#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int> v)
{
    int ans = 0;
    int start = 0, end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (start == end)
            return start;
        if ((mid + 1 <= end) && (v[mid] > v[mid + 1]))
            return mid;
        if ((mid - 1 >= start) && (v[mid - 1] > v[mid]))
            return mid - 1;
        else if (v[start] > v[mid]) // we are in line B, move toward line A i.e. left
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr = {9, 10, 2, 4, 6, 8};
    int ans = findPivot(arr);
    if (ans == -1)
        cout << "Element not present in the array!" << endl;
    else
    {
        cout << "Pivot elemen is at index " << ans << endl;
        cout << "Pivot element is " << arr[ans] << endl;
    }
    return 0;
}
