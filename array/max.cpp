#include <bits/stdc++.h>
using namespace std;

int findM(vector<int>&arr){
    int n=arr.size();
    int m=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
        
    };
    return m;
}

int main(){
    vector<int> arr={2,5,7,89,3,2};
  
   cout<< findM(arr);
    return 0;

}