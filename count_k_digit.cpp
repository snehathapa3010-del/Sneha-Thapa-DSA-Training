#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    int count=0;
    cout<<"enter the digit to be count:";
    cin>>x;
    int sum=0;
    do{
        int rem=n%10;
        if(rem==x) count++;
        n/=10;
        
    }while(n>0);
    cout<<count;
}