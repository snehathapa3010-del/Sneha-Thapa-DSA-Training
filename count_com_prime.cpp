#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=0;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        bool flag=false;
        for(int j=2;j<i;j++){
            if(i%j==0) { 
            flag=true;
            break;
            }
        }
        if(flag==true){
            count++;
        }
    }
    cout<<"composite:"<<count<<" "<<"prime:"<<n-count;
}