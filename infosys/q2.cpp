#include<bits/stdc++.h>
using namespace std;
long long minimumcost(int n , vector<pair<int,int>>& tanks, vector<int>& cost){
    long long totalbalance=0;
    long long prefixbalance=0;
    long long totalCost=0;
    for(int i=0;i<n ;i++){
        totalbalance+=tanks[i].first - tanks[i].second;         
    }
    if(totalbalance!=0){
        return -1;
    }
    for(int i =0;i<n-1;i++){
        prefixbalance+= tanks[i].first-tanks[i].second;
        totalCost+=abs(prefixbalance-   )
    }
}
int main(){
    int n ;
    cin>>n;
    
}