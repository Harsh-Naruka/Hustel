#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        int c;
        if(a==c&&b==d)cout<<"0\n";
        if(b>d)cout<<"-1\n";
        else if(b<d){
            a++;
            c++
            b++;
        }
        else if(b==d&&a<c){
            a--;
            c++;
        }
        cout<<"c"<<"\n";
    }
    return 0;
}
