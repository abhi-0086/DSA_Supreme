#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{10, 20, 30, 40, 50};
    int target = 80;
    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {
            for (int k = j + 1; k < a.size(); k++)
            {
                if (a[i] + a[j] + a[k] == target)
                    ans.push_back({a[i], a[j], a[k]});
            }
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