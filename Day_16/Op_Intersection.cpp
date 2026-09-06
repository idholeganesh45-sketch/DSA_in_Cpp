#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function to Intersection  array
vector<int> Intersection(int arr1[], int arr2[], int n, int m){
    vector<int> ans;
    int i=0, j=0;

    while (i<n && j<m)
    {
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    
    return ans;

}


int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int A[n];
    int B[m];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    for(int i=0; i<m; i++){
        cin>>B[i];
    }

    vector<int> ans = Intersection(A,B,n,m);

    // Print Result
    cout<<"Intersection Array "<<endl;
    for(auto it : ans){
        cout<<it<<" ";
    }

    return 0;
}