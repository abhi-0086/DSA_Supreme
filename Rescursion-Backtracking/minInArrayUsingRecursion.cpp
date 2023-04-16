#include<bits/stdc++.h>
using namespace std;

void input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}

void min_value_in_array(int arr[], int size, int ind, int &mini)
{
    if(ind >= size)
    {
        return;//we have corssed the range of array
    }

    //solve one case
    if(arr[ind] < mini)
        mini = arr[ind];

    //recursive call
    min_value_in_array(arr, size, ind+1, mini);
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter array elements : ";
    input_array(arr, n);
    int mini = INT_MAX;
    min_value_in_array(arr, n, 0, mini);
    cout << "Minimum number in array is : " << mini << endl;
    return 0;
}