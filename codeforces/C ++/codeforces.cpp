#include<iostream>
using namespace std;

int main() { 
    int n,m;
    cin>>n>>m;
    if(n==2&&m==3)cout<<"YES";
    if(n==3){
        if(m%2!=0&&m%3!=0){
            cout<<"YES";
        }
    }
    if(n%2!=0&&n%3!=0){
        if(m%2!=0&&m%3!=0){
            if(n+2==m&&(m%2!=0&&m%3!=0))cout<<"YES";
            else if(n+4==m&&(m%2!=0&&m%3!=0))cout<<"YES";
            else cout<<"NO";
        }
        else cout<<"NO";
    }
    return 0;
}