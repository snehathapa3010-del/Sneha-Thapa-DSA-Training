#include <bits/stdc++.h>
using namespace std;


int main (){
    long a;
    cin>>a;
    long count=0;
    while(a>0){
        if(a>=5){
            a-=5;
            count++;
        }else if(a<5&&a>=4){
            a-=4;
            count++;
        }else if(a<4 && a>=3){
            a-=3;
            count++;
        }else if(a<3 && a>=2){
            a-=2;
            count++;
        }else if(a<2 && a>=1){
            a-=1;
            count++;
        }
        
    }
    cout<<count;
}