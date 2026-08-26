#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[mini]>arr[j]) mini=j;
        }
        int temp = arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Selection sort
    selection_sort(arr,n);

    // print sorted array
    cout<<"Sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }

    return 0;
}