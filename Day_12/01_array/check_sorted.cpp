#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

void checkSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1] <= arr[i]){

        }
        else{
            cout<<"Not Sorted !...";
            return;
        }
    }
    cout<<"array is Sorted ";
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // print sorted array
    checkSorted(arr,n);
    return 0;
}