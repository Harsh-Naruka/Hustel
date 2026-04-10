#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t; cin>>t;
	
	while(t--){
	    
		int a, b, c; cin>>a>>b>>c;
 
        //ye actual hai
		int A = b - (c-b); 
		int B = a + (c-a)/2;
		int C = b + (b-a);
		
		//a mein dikkat
		if(A!=0 && A>=a && A%a==0) cout<<"YES\n";
		
		//b mein dikkat
		else if(B && B>=b && B%b==0 && (c-a)%2==0) cout<<"YES\n";
 
		//c mein dikkat
		else if(C && C>=c && C%c==0) cout<<"YES\n";
 
		//kuch nhi ho skta
		else cout<<"NO\n";
		
	}
}
