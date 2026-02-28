#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n; cin>>n;
    int a[n] ; int coin=0, sum=0 , crt=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sum/=2;
    sort(a,a+n,greater<int>());
    
    for(int i=0;i<n;i++){
        crt+=a[i];
        coin++;
        if(crt>sum)break;
    }
    cout<<coin;
}