#include<iostream>
using namespace std;
int main() {
    char c,i; cin>>c;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    while(cin>>i){
        cout<<s[s.find(i)-(c=='R')+(c=='L')];
    }
} 
