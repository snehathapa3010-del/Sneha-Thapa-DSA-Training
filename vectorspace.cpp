#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y,z;
    int xf=0;
    int yf=0;
    int zf=0;
    
    for(int i=0;i<n;i++){
        cin>>x>>y>>z;
        xf+=x;
        yf+=y;
        zf+=z;
    }
    if(xf!=0 || yf!=0 ||zf!=0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}