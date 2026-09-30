#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        int rem=n%10;
        ans+=rem;
        n/=10;
    }
    cout<<ans;
}