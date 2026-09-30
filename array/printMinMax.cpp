#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,5,6,7,9,7,8,0,3,10};
    int mx=INT_MIN;
    int mn=INT_MAX;
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // for(int i=0;i<n;i++){
    //     mx=max(mx,arr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     mn=min(mn,arr[i]);
    // }
    // cout<<endl;
    // cout<<"MAX:"<<mx<<endl;
    // cout<<"MIN:"<<mn;
    
    int max=arr[0];
    int smax=-1;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
    }
    cout<<smax;
}