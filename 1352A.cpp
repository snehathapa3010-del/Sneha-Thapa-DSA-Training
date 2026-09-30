#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cin>>n;
    int b;
    vector<int>ar;
    for(int i=0;i<n;i++){
        cin>>b;
        ar.push_back(b);
    }
    for(int i=0;i<n;i++){
        vector<int>arr;
        int c=1;
        int a=ar[i];
        int count=0;
        while(a>0){
            int r=a%10;
            
            if(r!=0){
                r*=c;
                arr.push_back(r);
                
                count++;
            }
                c*=10;
            
            
            a/=10;
            
        }
        cout<<endl;
        cout<<count;
        cout<<endl;
        for(int i:arr){
            cout<<i<<" ";
        }

    }
}