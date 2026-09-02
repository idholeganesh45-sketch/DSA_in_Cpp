#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function to reverse array
void reverseArr(int arr[],int start, int end){
    int temp;
    while(start<=end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp ;
        start++;
        end--;
    }
}

void leftRotate(int arr[], int n,int d){
    d = d%n;
    reverseArr(arr, 0, d-1);
    reverseArr(arr, d, n-1);
    reverseArr(arr, 0,n-1);
}

int main(){
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    leftRotate(arr,n,d);

    // print sorted array
    cout<<"Array after rotation"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}