#include<iostream>
using namespace std;
int main(){
    long long n ,k; cin>>n>>k;
    n=(n+1)/2;
    if(k<=n){
        cout<<(k*2)-1;
    }
    else{
        cout<<(k-n)*2;
    }
    return 0;
}