#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int removeElement(int arr[], int n){
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // remove dublicates
    cout<<"No. of Element : "<<removeElement(arr,n)<<endl;

    // print sorted array
    cout<<"Sorted array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}