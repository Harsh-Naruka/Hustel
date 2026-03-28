#include<iostream>
using namespace std;
int main(){
	int n,m; cin>>n>>m;
	int c=0;
	while(n--){
		int a;cin>>a;
		if(m>0){
			m--;
			if(a<0){c=c+(a*(-1));}
		}
	}
	cout<<c;
}
