#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;
        
        vector<long long> a(n), original(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            original[i] = a[i];
        }
        
        for (int i = 0; i < m; i++) {
            int b;
            long long c;
            cin >> b >> c;
            b--; // convert to 0-indexed
            
            a[b] += c;
            
            // Check only the modified element
            if (a[b] > h) {
                a = original;
            }
        }
        
        // Output the final array
        for (int i = 0; i < n; i++) {
            cout << a[i];
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}