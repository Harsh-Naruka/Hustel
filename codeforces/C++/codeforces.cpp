#include<bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>>k;
    int a[12],mx=0;
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    int count=0,sum=0;
    sort(a,a+12);
    for(int i=11;i>=0;i--){
        if(sum>=k)break;
            sum+=a[i];
            count++;
        
    }
    cout<<count;
}