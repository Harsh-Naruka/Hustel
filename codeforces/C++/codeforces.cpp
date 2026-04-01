#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n; cin>>n;
        int c=0;
        if(n<3 && n!=2 )cout<<"0\n";
        else if(n%5==0) cout<<"-1\n";
        else{
                if(n%6==0) {
                    n/=6;
                    c++;
                }
                else{
                    n*=2;
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }
