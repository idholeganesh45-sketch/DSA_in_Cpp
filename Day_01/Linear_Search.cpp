// Linear Search

// TC = O(n)
// SC = O(1)

#include<iostream>
using namespace std;

int main(){
    int arr[] = {25,3,6,2,5,4,8,5,95,8,2,458,55,4858,54,58,2};
    int key =5;
    int sz = (sizeof arr) /4;
    for(int i=0; i<sz; i++){
        if(key == arr[i]){
            cout<<"Key at index : "<<i;
            break;
        }
    }
    return 0;
}