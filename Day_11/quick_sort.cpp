#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int funct(int arr[], int low, int high){
    int pivat = low;
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= arr[pivat] && i<=high){
            i++;
        }

        while(arr[j]>arr[pivat] && j>=low){
            j--;
        }

        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
        return j;
    }
}



quick_sort(int arr[], int low, int high){
    if(low<high){
        int partition = funct(arr, low, high);
        quick_sort(arr,low,partition-1);
        quick_sort(arr, partition+1, high);

    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Quick sort
    quick_sort(arr,0,n-1);

    // print sorted array
    cout<<"Sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}