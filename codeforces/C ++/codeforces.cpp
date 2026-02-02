#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, t;
    cin >> n >> k >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int moves = t / k;
    int pos = moves % n;

    if (pos == 0)
        cout << a[n - 1];
    else
        cout << a[pos - 1];

    return 0;
}
