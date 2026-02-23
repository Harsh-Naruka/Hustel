#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        
        int ones = 0, zero_blocks = 0;
        bool in_zero = false;
        
        for(char c : s){
            if(c == '1'){
                ones++;
                in_zero = false;
            } else {
                if(!in_zero){
                    zero_blocks++;
                    in_zero = true;
                }
            }
        }
        
        cout << (ones > zero_blocks ? "Yes" : "No") << "\n";
    }
}