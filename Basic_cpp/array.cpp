#include <iostream>
using namespace std;

int main() {
    int marks[5];

    // Input
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    // Output
    for (int i = 0; i < sizeof(marks) / sizeof(marks[0]); i++) {
        cout << marks[i] << endl;
    }

    return 0;
}


// int main(){
//     int j=1;
//     int array[5]={5,15,22,1,-15};
//     for (int i=0; i<5; i++){
//         if (array[i]<array[j]){
        
//         }
//         cout<<array[j];
//     }

//     return 0;
// }

// int main(){
    // int array[]={-102,35,-26,85,65};
    // int sz=sizeof(array)/sizeof(int);
    // int largest=array[0],smallest=array[0];
    // for (int i=1; i<sz; i++){
    //     if (smallest>array[i]){
    //         smallest=array[i];
    //     }
    //     if(largest<array[i]){
    //         largest=array[i];
    //     }
    // }
    // cout<<smallest<<endl;
    // cout<<largest<<endl;

//     int array[]={-102,35,-26,85,65};
//     int sz=sizeof(array)/sizeof(int);
//     int largest_index=0,smallest_index=0;
//     for (int i=1; i<sz; i++){
//         if (array[smallest_index]>array[i]){
//             smallest_index=i;
//         }
//         if(array[largest_index]<array[i]){
//             largest_index=i;
//         }
//     }
//     cout<<smallest_index<<endl;
//     cout<<largest_index<<endl;
//     return 0;
// }


// int main() {

//     int array[]={4,2,7,8,1,2,5};
//     int target=0;
//     int ind=-1;
//     for (int i=0; i<(sizeof(array)/4); i++){
//         if (target==array[i]){
//             ind=i;
//             break;
//         }
//     }
//     cout<<ind;
//     return 0;
// }

//REVERSE an ARRAY
// int main(){
//     int array[6]={4,8,3,7,2};
//     int sz=5;
//     int start=0, end=sz-1;
//     cout<<"before"<<endl;
//     for (int i = 0; i < sz; i++) {
//         cout << array[i] << " ";
//     }
//     cout << endl;
//     while (start<=end){
//         swap(array[start],array[end]);
//         start++;
//         end--;
//     }
//     cout<<"After"<<endl;
//     for (int i = 0; i < sz; i++) {
//         cout << array[i] << " ";
//     }

//     return 0;
// }



//sum and product of no.s of array

// int main(){
//     int array[]={4,5,2,6,4,1};
//     int sz=sizeof(array)/sizeof(int);
//     int sum=0, product=1;
//     for (int i=0; i<sz; i++){
//         sum+=array[i];
//         product*=array[i];
//     }
//     cout<<"sum:"<<sum<<endl;
//     cout<<"product:"<<product<<endl;
//     return 0;
// }

// swap the max and min num in array

// int main(){
//     int array[]={5,6,2,41,52,65};
//     int sz=6;
//     int min_ind=0,max_ind=0;
//     for (int i=1; i<sz; i++){
//         if (array[min_ind]>array[i]){
//             min_ind=i;
//         }
//         if (array[max_ind]<array[i]){
//            max_ind=i;
//         }

//     }
//     swap(array[min_ind],array[max_ind]); 
//     for (int i=0;i<sz; i++){
//         cout<<array[i]<<" ";
//     }

//     return 0;
// }


//print unique values in aaray

// int main(){
//     int array[]={2,5,8,6,7,2,4,5,86,6,8};
//     int sz=sizeof(array)/sizeof(int);
    
//     for (int i=0; i<sz; i++){
//         int result=1;
//         for (int j=0;j<sz; j++){
//             if (i!=j && array[i]==array[j]){
//                 result=0;
//                 break;
            
//             }
//         }
//         if (result==1){
//             cout<<array[i]<<" ";
//         }
//     }
//     return 0;
// }

// intersection of to array

// int main(){
//     int arr1[5]={1,2,3,4,5};
//     int arr2[6]={3,4,5,6,7,1};
//     int s1=5;
//     int s2=6;
//     for (int i=0; i<s1; i++){
//         for (int j=0; j<s2; j++){
//             if (arr1[i]==arr2[j]){
//                 cout<<arr1[i]<<" ";
//             }
//         }
//     }
//     return 0;

// }