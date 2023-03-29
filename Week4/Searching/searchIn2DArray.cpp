#include<bits/stdc++.h>
using namespace std;

bool search_matrix(vector<vector<int>> matrix, int target)
{
    int rowSize = matrix.size();
    int colSize = matrix[0].size();
    int totalSize = rowSize*colSize;
    int start = 0;
    int end = totalSize - 1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        int rowInd = mid / colSize;
        int colInd = mid % colSize;
        if(matrix[rowInd][colInd] == target)
            return true;
        if(matrix[rowInd][colInd] > target)
            end = mid - 1;
        else
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int key = 14;
    bool ans = search_matrix(v, key);
    if(ans)
        cout << "Element present in matrix." << endl;
    else
        cout << "Element not present in matrix." << endl;
    return 0;
}