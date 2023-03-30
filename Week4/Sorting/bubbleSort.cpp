#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    for(int round=1; round<arr.size(); round++)
    {
        bool swapped = false;
        for(int j=0; j<arr.size()-round; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(swapped == false) break;
    }
}

int main()
{
    vector<int> v = {67, 23, 78, 1, 89, 90};
    bubble_sort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    cout << endl;
    return 0;
}