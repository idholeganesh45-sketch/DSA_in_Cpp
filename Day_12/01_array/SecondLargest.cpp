#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int secondLargest(int arr[],int n){
    int largest = arr[0];
    int sLargest = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>sLargest && arr[i]!=largest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int secondSmallest(int arr[],int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<sSmallest && arr[i]!=smallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // print sorted array
    
    cout<<"Second Largest : "<<secondLargest(arr,n)<<endl;
    cout<<"Second Smallest : "<<secondSmallest(arr,n)<<endl;
    return 0;
}