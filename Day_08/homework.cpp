#include<iostream>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
// function to print the highest frequency and the lowest frequency in array
void freq(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int> hash;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }

    // prestoring in map
    int high=0;
    int low=INT_MAX;
    for(auto it:hash){
        if(it.second>high) high=it.second;
        if(it.second<low) low=it.second;
    }
    cout<<"Highest frequency : "<<high<<endl;
    cout<<"Lowest frequency : "<<low<<endl;
}

int main(){
    // input array
    int n;
    cin>>n;
    int arr[n];
    map<int,int> hash;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }

    // prestoring in map
    int high=0;
    int low=INT_MAX;
    for(auto it:hash){
        if(it.second>high) high=it.first;
        if(it.second<low) low=it.first;
    }
    cout<<"Highest frequency element : "<<high<<endl;
    cout<<"Lowest frequency element : "<<low<<endl;

    return 0;
}