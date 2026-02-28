#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }
    if(n==2)cout<<'2';
    else{
        for(int i=0;i<n;i++){
            if(n%2==0 && i<=n/2){
                count+=coin[i];
            }
            else{
                
            }
        }
    }
}