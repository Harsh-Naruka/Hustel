#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int a[n];
        int b[n];
        int count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        set<int> s(b,b+n);
        if(s.size()==1)cout<<1<<'\n';
        else{
            if(n%2==0)count+=1;
            sort(a,a+n);
            for(int i=0;i<n-1;i++){
                if(a[i]==a[i+1])count+=1;
                else if(a[i]!=a[i+1]){
                    count+=2;
                }
            }
        }  
        cout<<count<<'\n';
    }
    return 0;
}