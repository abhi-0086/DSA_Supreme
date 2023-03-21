#include <bits/stdc++.h>
using namespace std;

int first_occurence(vector<int> arr, int target)
{
    int s = 0, e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // here we encoutered target (4) at mid so we store mid as our answer and check if 4 has occured before or not
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 1;
    int ans = first_occurence(v, target);
    if (ans != -1)
    {
        cout << "First Occurence of " << target << " is at index " << ans << endl;
    }
    else
    {
        cout << target << " is not present in the array" << endl;
    }
    return 0;
}