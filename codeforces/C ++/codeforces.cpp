#include <iostream>
#include <climits>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Check if already not sorted
        bool sorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                sorted = false;
                break;
            }
        }

        // If already not sorted
        if (!sorted) {
            cout << 0 << endl;
            continue;
        }

        // Find minimum adjacent difference
        long long minDiff = LLONG_MAX;

        for (int i = 0; i < n - 1; i++) {
            long long diff = a[i + 1] - a[i];
            if (diff < minDiff) {
                minDiff = diff;
            }
        }

        // Minimum operations
        long long answer = (minDiff / 2) + 1;

        cout << answer << endl;
    }

    return 0;
}
