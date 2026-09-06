#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// function to Union  array
vector<int> Union(int arr1[], int arr2[], int n, int m){
    set<int> st;
    vector<int> Union;

    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }

    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }

    for(auto it: st){
        Union.push_back(it);
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