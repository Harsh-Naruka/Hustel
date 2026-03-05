#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> G(n+1, vector<int>(n+1));
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                cin >> G[i][j];
        
        for(int k = 2; k <= 2*n; k++){
            // find valid i,j where i+j=k, 1<=i,j<=n
            int i = max(1, k-n);
            int j = k - i;
            cout << G[i][j];
            if(k < 2*n) cout << " ";
        }
        cout << "\n";
    }
}