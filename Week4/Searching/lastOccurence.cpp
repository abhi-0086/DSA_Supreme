#include <bits/stdc++.h>
using namespace std;

int last_occurence(vector<int> arr, int target)
{
    int s = 0, e = arr.size() - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            // here we encountered target (7) at mid index so we store mid as ans and, check if there is any occurence of 7 after this index
            ans = mid;
            s = mid + 1;
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
    vector<int> v = {1, 3, 7, 7, 7, 7, 9, 12, 13, 13, 25, 34, 50};
    int target = 13;
    int ans = last_occurence(v, target);
    if (ans != -1)
    {
        cout << "Last occurence of " << target << " is at index " << ans << endl;
    }
    else
    {
        cout << target << " is not present in the array" << endl;
    }
    return 0;
}