#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute Force 
// void moveZeros(int arr[], int n){
//     list<int> temp;

//     for(int i=0; i<n; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }

//     int nz = temp.size();
  
//     int i = 0;
//     for(auto it:temp){
//         arr[i] = it;
//         i++;
//     }

//     for(int i=nz; i<n; i++){
//         arr[i] = 0;
//     }
// }


// Optimal Solution
void moveZeros(int arr[], int n){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }
    if(j==-1) return;
    int temp;
    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
           j++;   
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    moveZeros(arr,n);

    // print array
    cout<<"Final Array "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}