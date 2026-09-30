#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool flag=false;
    int count=0;
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=true;
            count++;
        }
    }
    if(flag==true){ 
         cout<<"not prime";
    }else{
        cout<<"prime";
    }
}