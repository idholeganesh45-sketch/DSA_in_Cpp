// Find the smallest element in an array.

// Time Complexity = O(n)
// Space Complexity = O(n)

#include<iostream>
using namespace std;

int main(){
    int arr[]={25,36,1,25,4,3,85,6,225};
    int sz = (sizeof arr)/4;
    int smallest = arr[0];
    for(int i=0; i<sz; i++){
        if(smallest>arr[i]){
            smallest = arr[i];
        }
    }
    cout << "Given Array : ";
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Smallest no. is : "<<smallest<<endl;
    return 0;
}

