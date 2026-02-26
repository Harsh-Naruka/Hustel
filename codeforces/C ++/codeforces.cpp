#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        
        long long ans = 0;
        long long curSide = 0;
        long long curTime = 0;
        
        for(int i = 0; i < n; i++){
            long long a, b;
            cin >> a >> b;
            
            long long slots = a - curTime;
            long long needOdd = (b != curSide) ? 1 : 0;
            
            long long best = slots;
            if(best % 2 != needOdd) best--;
            
            ans += best;
            curSide = b;
            curTime = a;
        }
        
        // Last segment
        ans += (m - curTime);
        cout << ans << "\n";
    }
    return 0;
}