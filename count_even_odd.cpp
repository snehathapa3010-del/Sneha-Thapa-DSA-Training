#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int even=0;
    int odd=0;
    
    int sum=0;
    do{
        int rem=n%10;
        if(rem%2==0) even++;
        if(rem%2!=0) odd++;
        n/=10;
        
    }while(n>0);
    cout<<"even count:"<<even<<endl; 
    cout<<"odd count:"<<odd; 
}