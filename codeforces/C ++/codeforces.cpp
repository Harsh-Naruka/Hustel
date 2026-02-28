#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0 , count2=0;
    int coin[n];
    for(int i=0;i<n;i++){
        cin>>coin[i];
        if(n%2==0){
            if(i<(n/2)+1){
                count1+=coin[i];
            }
            else{
                count2+=coin[i];
            }
        }
        else{
            
        }
    }
}