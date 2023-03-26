#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a{0, 1, 1, 0, 1, 0, 1, 0, 0};
    int countZero = 0, countOne = 1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 0)
            countZero++;
        if (a[i] == 1)
            countOne++;
    }
    int i = 0;
    while (countZero != 0)
    {
        a[i++] = 0;
        countZero--;
    }
    while (countOne != 0)
    {
        a[i++] = 1;
        countOne--;
    }

    for (auto i : a)
        cout << i << " ";
    cout << endl;

    return 0;
}