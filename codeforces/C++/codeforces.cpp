#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t; cin>>t;
	while(t--){
        int x,m,n; cin>>x<<m<<n;
        int result=x-n;
        if(result<=0) cout<<"YES\n",return 0;
        for(int i=0;i<m;i++) result/=2;
        if (result<=0)cout<<"YES\n";
        else cout<<"NO\n";
	}
}
