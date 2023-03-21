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
    vector<int> v = {1, 3, 4, 4, 4, 4, 4, 4, 6, 7, 9, 12};
    int target = 10;
    int first = first_occurence(v, target);
    int last = last_occurence(v, target);
    if (first == -1 || last == -1)
        cout << target << " occured 0 times." << endl;
    else
    {
        int ans = last - first + 1;
        cout << "The total occurence of " << target << " is " << ans << " times" << endl;
    }
    return 0;
}