#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{0, 1, 1, 0, 1, 0, 1, 0, 0};

    int i = 0;
    int start = 0;
    int end = a.size() - 1;
    while (start < end)
    {
        if (a[i] == 0)
        {
            swap(a[i++], a[start++]);
        }
        else if (a[i] == 1)
            swap(a[i], a[end--]);
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}