#include <bits/stdc++.h>
using namespace std;

void findT(vector<int>&arr,int t){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(t==arr[i]){
            cout<<"Target found at indx :"<<i;
            return;
        }
        
    };
    cout<<"Not found";
}

int main(){
    vector<int> arr={2,5,7,89,3,2};
   int target;
   cout<<"Enter the taget to be find:";
   cin>>target;
    findT(arr,target);
    return 0;

}