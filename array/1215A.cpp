#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
 
    vector<int>arr(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>h;
    for(int i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(auto i:h){

        if(i.second==1){
            ans=i.first;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==ans){
            cout<<i+1;
            break;
        }
    }
}