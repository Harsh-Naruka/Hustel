#include<iostream>
using namespace std;
int main() {
    char c,i; cin>>c;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string a;cin>>a;
    while(cin>>i){
        if(c=='R') cout<<s[s.find(i)-1];
        else cout<<s[s.find(i)+1];
    }
}    