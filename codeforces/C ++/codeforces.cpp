#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool seen=false;
    for(char c:s){
        if(!seen && s.find("WUB")==string::npos){
            cout<<c;
        }
    }
    return 0;
}