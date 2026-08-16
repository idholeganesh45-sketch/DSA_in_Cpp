// Find the largest element in an array.

// Time Complexity = O(n)
// Space Complexity = O(n)

#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,52,64,25,36,25};
    int large_index = 0;
    int sz = sizeof(arr)/4;
    for(int i=0; i<sz; i++){
        if(arr[large_index]<arr[i]){
            large_index = i;
        }
    }
    cout<<"Given Array : ";
    for (int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Largest Element in above array : "<<arr[large_index]<<endl;
    return 0;
}

