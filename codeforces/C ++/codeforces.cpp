#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int p=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='('&&s[i+1]==')'){
                p++;
            }
        }
        if(p>=2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
