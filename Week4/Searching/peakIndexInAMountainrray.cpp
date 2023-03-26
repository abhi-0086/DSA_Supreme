#include <bits/stdc++.h>
using namespace std;
int peakElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1]) // we are in Line A of graph , Search for peak in right
        {
            start = mid + 1;
        }
        else
        {
            // here we maybe at peak or in line B of graph
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end; // can also return start
}
int main()
{
    vector<int> v = {0, 10, 5, 2};
    int ans = peakElement(v);
    cout << "The peak element is at index " << ans << " and is " << v[ans] << endl;
    return 0;
}