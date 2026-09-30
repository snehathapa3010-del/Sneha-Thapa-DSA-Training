#include <bits/stdc++.h>
using namespace std;

int main (){
    int i;
    cin>>i;
    vector<int>arr(i);
    for(int j=0;j<i;j++){
        
        cin>>arr[j];
    }
    int c=0;
    for(int j=1;j<i;j++){
        if(arr[j-1]<=arr[j]-3){
            c++;
        }
    }
    cout<<"no. of improvement days:"<< c;
}