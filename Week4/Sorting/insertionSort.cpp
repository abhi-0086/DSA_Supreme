#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    for(int round=1; round<arr.size(); round++)
    {
        int value = arr[round];
        int j = round -1;
        for(; j>=0; j--)
        {
            if(arr[j] > value)
            {
                arr[j+1] = arr[j];
            }
            else
                break;
        }
        arr[j+1] = value;
    }
}
int main()
{
    vector<int> v = {10,1,7,6,14,9};
    insertion_sort(v);
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    cout << endl;
    return 0;
}