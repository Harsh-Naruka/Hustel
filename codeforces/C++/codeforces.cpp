#include<iostream>
using namespace std;
int main(){
    string n; cin>>n;
    bool flag=false;
    for(int i=0;i<n.size()-2;i++){
        if(n[i]=='1' || (n[i]=='1' && n[i+1]=='4') || (n[i]==1 && n[i+1]=='4' && n[i+2]=='4')) flag=true;
        else {
            flag=false;
        }
    }
    if(flag==true) cout<<"YES";
    else cout<<"NO";
}