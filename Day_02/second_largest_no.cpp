// TC = O(n)
// SC = O(1)

/*
#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<largest<<endl;
    for(int i=0; i<n; i++){
        if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    }
    cout<<second_largest;
    return 0;
}
*/

#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    int largest=arr[0];
    int second_largest=0;
    for(int i=0; i<n; i++){
       if(arr[i]>largest){
        second_largest = largest;
        largest = arr[i];
       }
       else if(arr[i]>second_largest && arr[i] != largest){
        second_largest = arr[i];
       }
    }
    cout<<"Largest : "<<largest<<endl;
    cout<<"Second Largest : "<<second_largest;
    return 0;
}


