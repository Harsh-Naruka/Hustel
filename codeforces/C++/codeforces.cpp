#include<bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>>k;
    int a[11],mx=0;
    for(int i=0;i<11;i++){
        cin>>a[i];
    }
    int count=0,sum=0;
    sort(a,a+11);
    for(int i=10;i>=0;i--){
        if(sum<k){
            sum+=a[i];
            count++;
        }
    }
    cout<<count;
}