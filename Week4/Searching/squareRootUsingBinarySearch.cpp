#include<bits/stdc++.h>
using namespace std;

int square_root(int x){
    int res = 0;
    int low = 1;
    int high = x;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid <= x/mid)
        {
            res = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return res;

}
int main(){
    int num; 
    cout << "Enter the number : ";
    cin >> num;
    int ans = square_root(num);
    cout << "Square root of " << num << " is " << ans << endl;
    return 0;
}