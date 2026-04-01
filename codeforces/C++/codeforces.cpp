#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n; cin>>n;
        int a=0;
        int b=0;
        while(n%2==0){
            a++;
            n=n/2;
        }
        while(n%3==0){
            b++;
            n=n/3;
        }
        if(n!=1 || b<a)cout<<"-1\n";
        else{
            cout<<(b+(b-a))<<endl;
        }
        }
    }
