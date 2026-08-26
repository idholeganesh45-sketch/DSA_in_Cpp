#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int didSwap=0;
        for(int j=0; j<n-i; j++){
            if(arr[j+1]<arr[j]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap == 0){
            break;
        }
        cout<<"runs"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Bubble sort
    bubble_sort(arr,n);

    // print sorted array
    cout<<"Sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}