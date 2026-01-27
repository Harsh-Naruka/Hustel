#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        long long int x,y;
        string s;
        cin>>s;
        int c4=0,c8=0;
        for(char c:s){
            if(c=='8')c8++;
            else c4++;
        }
        long long dx=llbs(x);
        long long dy=llbs(y);
        if(dx+dy <= d4 + 2*c8 && max(dx,dy)<=d4+d8)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
