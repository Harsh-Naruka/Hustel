#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s.find("WUB")){
            cout<<s[i+1];
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}