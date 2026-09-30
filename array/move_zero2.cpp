#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2;
    for(int i=0;i<n;i++){
        if(arr1[i]>0){
            arr2.push_back(arr1[i]);
        }
    }
    for(int i=0;i<n;i++){
        if(arr1[i]==0){
            arr2.push_back(arr1[i]);
        }
    }
    for(int x:arr2){
        cout<<x<<" ";
    }
}