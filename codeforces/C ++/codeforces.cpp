#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        bool c=false;
        int count=0;
        for(int i=0;i<n-2;i++){
           if(a[i]<a[i+1])c=true;
           else c=false;
           int b=n-2;
           if(a[b]<=a[b+1]){
            a[b]=a[b]+1;
            a[b+1]=a[b+1]-1;
            count+=1;
           }
        }
        if(c=false)cout<<0<<'\n';
        else{
           cout<<count<<'\n';
        } 
        }
        return 0;
    }   
    
