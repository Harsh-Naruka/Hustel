#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string s;
    int c=0 , d=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==0)c++;
        else d++;
    }
    if(c>d)cout<<c-d;
    else cout<<d-c;
}