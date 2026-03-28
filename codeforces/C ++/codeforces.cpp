#include<iostream>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	while(t--){
	ll a; cin>>a;
	while(a%2==0) a=a/2;
	cout<<(a>1?"Yes":"No");
	}
}
