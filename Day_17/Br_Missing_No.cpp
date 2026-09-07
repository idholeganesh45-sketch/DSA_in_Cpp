#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// TC : O (n^2)

int missingNo(int arr[], int n){
    for(int i=1; i<=n; i++){
        int flag = 0;
        for(int j=0; j<n-1; j++){
            if(arr[j] == i){
                flag = i;
                break;
            }
        }
        if(flag == 0){
            return i;
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    
    int ans = missingNo(arr,n);
    cout<<ans<<endl;

    return 0;
}