#include<iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int a[7];
        int mx=-68,sum=0;
        for(int i=0;i<7;i++){
            cin>>a[i];
            mx=max(a[i],mx);
            sum+=a[i];
        }
        cout<<-sum+(2*mx)<<'\n';
    }
} 
