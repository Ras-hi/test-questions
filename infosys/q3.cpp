#include<bits/stdc++.h>
using namespace std;
int maxscratch(string s1, string s2){
    int n =s1.size();
    int left=0, mismatch =0, ans=0;
    for(int right=0;right<n ;right++){
        if(s1[right]!=s2[right]){
            mismatch++;
        }
        while(mismatch>1){
            if(s1[left]!=s2[left]){
                mismatch--;
            }
            left++;
        }
        ans=max(ans, right-left+1);
    }
    return ans;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<maxscratch(s1,s2)<<endl;

}