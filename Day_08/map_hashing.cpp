#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // input array
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // prestoring in map
    map<int,int> hash;
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    // fetching
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }
    

    return 0;
}