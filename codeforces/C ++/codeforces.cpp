#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int c=0,b=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1)b++;
            else c++;
        }
        if(b==c)cout<<"0\n";
        else if(n%2==0 && c>b){
            if(c%2!=0){
                
            }
        }
    }

    return 0;
}
