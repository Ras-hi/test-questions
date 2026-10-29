#include<bits/stdc++.h>
using namespace std;
int dirgrid(int R, int C, string s){
    int r=0, c=0;
    for(char ch:s){
        if(ch=='U'){
            r=(r-1+R)%R;
        }
        if(ch=='D'){
            r=(r+1)%R;
        }
        if(ch=='L'){
            c=(c-1+C)%C;
        }
        if(ch=='R'){
            c=(c+1)%C;
        }
    }
    return r*C+c;
}
int main(){
    int R,C;
    cin>>R>>C;
    string s;
    cin>>s;
    int ans =dirgrid(R,C,s);
    cout<<ans<<endl;
    return 0;
}