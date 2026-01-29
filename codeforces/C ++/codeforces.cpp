#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,k;
        cin>>x>>k;
        if(x!=k)cout<<"1\n"<<x<<'\n';
        else cout<<"1\n"<<x-1<<'\n';
    }

    return 0;
}
