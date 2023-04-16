#include<bits/stdc++.h>
using namespace std;

void input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void max_value_in_array(int arr[], int size, int ind, int &maxi)
{
    if(ind >= size)
    {
        return;//we have corssed the range of array
    }

    //solve one case
    if(arr[ind] > maxi)
        maxi = arr[ind];

    //recursive call
    max_value_in_array(arr, size, ind+1, maxi);
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter array elements : ";
    input_array(arr, n);
    int maxi = INT_MIN;
    max_value_in_array(arr, n, 0, maxi);
    cout << "Maximum number in array is : " << maxi << endl;
    return 0;
}