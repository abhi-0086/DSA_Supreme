//We are given an array with number ranging from [1, n+1] where 'n' is size of the array
//the elements are in sorted order

#include<bits/stdc++.h>
using namespace std;

int findMissing(vector<int> v){
    int ans = 0;
    int start = 0;
    int end = v.size()-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(mid+1 != v[mid])
        {
            ans = mid+1;
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,6,7,8};
    int missing_num = findMissing(arr);
    cout << "Missing element is " << missing_num << endl;
    return 0;
}