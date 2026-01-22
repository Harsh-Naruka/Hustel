#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p=0,x=0;
        for(char c:s){
            if(c=='(')p++;
            else x++;
        }
        if(p>=2&&x>=2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
