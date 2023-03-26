#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{1, 3, 5, 7, 2, 4, 6};
    int target = 9;
    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            if (a[i] + a[j] == target)
                ans.push_back({a[i], a[j]});
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}