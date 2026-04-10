#include<iostream>
using namespace std;
int main(){
    int a,mc=0; cin>>a;
    string s,ss,twogram; cin>>s;
    map<string ,int> smp;

    for(int i=0;i<a-1;i++){
        ss=s[i], ss+=s[i+1]; 
        smp[ss]++;//AB:1//
        if(smp[ss]>mc) mc=smp[ss] , twogram=ss;
    }
    cout<<twogram;
}