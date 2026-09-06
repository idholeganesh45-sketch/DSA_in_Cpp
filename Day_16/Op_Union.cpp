#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function to Union  array
vector<int> Union(int arr1[], int arr2[], int n, int m){
    vector<int> Union;
    int i=0, j=0;
    while (i<n && j<m)
    {
        if(arr1[i] <= arr2[j])
        {
            if(Union.size() == 0 || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(Union.size() == 0 || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
            j++;
        }
    
    }

    while(j<m){
        if(Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }
        j++;
    }

    while (i<n)
    {
        if(Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }
        i++;   
    } 
    
    return Union;

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

    vector<int> union1 = Union(A,B,n,m);

    // print sorted array
    cout<<"Union Array "<<endl;
    for(auto it : union1){
        cout<<it<<" ";
    }

    return 0;
}