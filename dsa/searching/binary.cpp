#include<bits/stdc++.h>
using namespace std;

// works for sorted array only- O(logn)

int binarySearch(vector<int>arr, int target){
    int n =arr.size();
    int low=0, high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return -1;
}
int main(){
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<binarySearch(arr, target)<<endl;
      

}