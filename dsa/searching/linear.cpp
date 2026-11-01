#include<bits/stdc++.h>
using namespace std;
int linearSearch(vector<int>arr, int target){
    int n =arr.size();
    for(int i =0;i<n ;i++){
        if(arr[i]==target){
            return i ;
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
    cout<<linearSearch(arr, target)<<endl;
      

}