#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{1, 2, 4, 6, 8, 10};
    vector<int> b{3, 4, 5, 6};
    // first we will mark the commin elements
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        for (int j = 0; j < b.size(); j++)
        {
            if (element == b[j])
                b[j] = -1;
        }
    }

    vector<int> ans;
    // push all elements of a in ans
    for (int i = 0; i < a.size(); i++)
        ans.push_back(a[i]);
    // now push all the elements of b in ans other than -1
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != -1)
            ans.push_back(b[i]);
    }

    cout << "Print ans array : ";
    for (auto i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}