#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n ,r; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>r;
        a[i]=r;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}