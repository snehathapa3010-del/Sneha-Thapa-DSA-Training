#include <bits/stdc++.h>
using namespace std;

int main(){
    int i;
    cout<<"enter the days:";
    cin>>i;
    
    vector<int>arr(i);
    for(int j=0;j<i;j++){
        cin>>arr[j];
    }
    int c=0;
    for(int j=0;j<i;j++){
        if(arr[j]>=10 && arr[j]%2==0){
            c++;
        }
    }
    cout<<"no of productive days: "<<c;
    }
