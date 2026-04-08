#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,mx=0; cin>>a;
    string s,ss,twogram; cin>>s;
    map<string ,int> smp;

    for(int i=0;i<a-1;i++){
        ss=s[i]; ss+=s[i+1]; smp[ss]++;
        if(smp[ss]>mc) mc=smp[ss] ,  togram=ss;
    }
    cout<<twogram;
}