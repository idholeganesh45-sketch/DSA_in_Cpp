#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Optimal no 1

// by sum
// int missingNo(int arr[], int n){
//     int sum = (n*(n+1))/2;
//     int s2 = 0;
//     for(int i=0; i<n; i++){
//         s2 = s2+arr[i];
//     }

//     return sum-s2;
// }


// XOR this is for 1 to N
int missingNo(int arr[], int N){
    int n = N-1;
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i=0; i<n; i++){
        XOR2 = XOR2 ^ arr[i];
        XOR1 = XOR1 ^ (i+1);
    }
    XOR1 = XOR1 ^ N;

    return XOR1 ^ XOR2;
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