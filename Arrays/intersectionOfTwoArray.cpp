#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{1, 2, 3, 4, 6, 8};
    vector<int> b{3, 4, 7, 9};

    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        int element = a[i];
        // for every elemnt search in second array
        for (int j = 0; j < b.size(); j++)
        {
            if (element == b[j])
                ans.push_back(element);
        }
    }

    cout << "Printing the intersection : ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}