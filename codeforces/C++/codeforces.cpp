#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    string s; cin>>s;
    int a=0, b=0;
    for(char c:s){
        if(c=='0')a++;
        else b++;
    }
    cout<<abs(a-b);
}