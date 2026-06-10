#include<bits/stdc++.h>
using namespace std;
 
int main(){
<<<<<<< HEAD
	int t; cin>>t;
	while(t--){	
		int n, ans=0; cin>>n;
		vector<int> a(n);
		for(int &x: a) cin>>x;
 
		//sorting based on even/odd
		sort(a.begin(), a.end(), [](int x, int y){return x%2 < y%2;});
 
		//cnt no. of good index pairs
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				ans += __gcd(a[i],a[j]*2)>1;
			}
		}
		
		cout<<ans<<endl;
=======
	int t; cin>>t; 
	while(t--){
		int n; cin>>n;
		cout<<n+(n-1)/9<<endl;
>>>>>>> 47c86fc (html)
	}
}
