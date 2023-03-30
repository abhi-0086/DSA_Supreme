#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr)
{
    for(int i=0; i<arr.size()-1; i++)
    {
        int min_ind = i;
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[j] < arr[min_ind])
                min_ind = j;
        }
        swap(arr[min_ind], arr[i]);
    }
}

int main()
{
    vector<int> v = {67, 23, 78, 1, 89, 90};
    selection_sort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    cout << endl;
    return 0;
}