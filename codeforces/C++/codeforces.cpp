#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s;
    int 1s=0 , 0s=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==0)0s++;
        else 1s++;
    }
    cout<<1s-0s;
}