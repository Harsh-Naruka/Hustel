#include<iostream>
using namespace std;
 
int main(){
	int t; cin>>t;
	while(t--){
        int x,n,m; cin>>x>>n>>m;
        if(x<=m) x=x-(m*10);
        else{
        for(int i=0;i<n;i++){
            x=(x/2)+10;
            }x=x-(m*10);
        }
        if (x<=m+n)cout<<"YES\n";
        else cout<<"NO\n";
	}
}
