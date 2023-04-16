#include<bits/stdc++.h>
using namespace std;

void input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

bool search(int arr[], int size, int ind, int key)
{
    if(ind >= size)
        return false;

    if(arr[ind] == key)
        return true;

    return search(arr, size, ind+1, key);
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter array elements : ";
    input_array(arr, n);
    int target;
    cout << "Enter search value : ";
    cin >> target;
    if(search(arr, n, 0, target))
        cout << target << " is present in array" << endl;
    else
        cout << target << " not present in array." << endl;
    return 0;
}