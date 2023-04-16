#include<bits/stdc++.h>
using namespace std;

void input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
}
void print_ind(int arr[], int size, int ind)
{
    if(ind >= size)
        return;
    
    cout << arr[ind] << " ";
    print_ind(arr, size, ind+1);
}

//recursive funtion for print withou passing index parameter
void print(int arr[], int size)
{
    if(size == 0)
        return;

    cout << arr[0] << " ";

    print(arr+1, size-1);
}

int main()
{
    int arr[100];
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter array elements : ";
    input_array(arr, n);
    print_ind(arr, n, 0);
    cout << endl;
    cout << "Printing without passing index : ";
    print(arr, n);
    cout << endl;
    return 0;
}