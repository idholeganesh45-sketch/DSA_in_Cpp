#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// int main(){
//     vector <char> vec={'a','b','c','d'};
//     vec.pop_back();
//     vec.push_back('4');
//     cout<<vec.front()<<"\n";
//     cout<<vec.back()<<endl;
//     cout<<vec.at(1)<<endl;

//     for (char val: vec){
//         cout<<val<<endl;
//     }

//     return 0;
// }

// single number

// int main(){
//     vector <int> nums={3,1,2,4,1,2,3};//every num is twice exept one
//     int ans=0;
//     for (int val : nums){
//         ans^=val;// use bitwise operator XOR
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// Linear search

// int main(){
//     vector <int> vec={1,2,6,5,8,4,2,3,5,6};
//     int sz=vec.size();
//     int target=10;
//     int r=-1;
//     for (int i=0; i<sz; i++){
//         if (target==vec[i]){
//             cout<<i<<endl;
//             r=i;
//             break;
//         }
//     }
//     if (r==-1){
//         cout<<"Not found"<<endl;
//     }
//     return 0;
// }

// Reverse vector using function

// int reverse_vector(vector <int>& vec,int sz){
//     int start=0,end=sz-1;
//     for (int i=0; i<sz; i++){
//         if (start<end){
//             swap(vec[start],vec[end]);
//         }
//     }
// }
// void display(vector <int> vec){
//     for( int val : vec){
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     vector <int> vec={2,5,6,4,2,5,36};
//     int sz=vec.size();
//     cout<<"before"<<endl;
//     display(vec);

//     reverse_vector(vec,sz);

//     cout<<"After"<<endl;
//     display(vec);
//     return 0;
// }

// Subu array

// int main(){
//     int array[5]={1,2,3,4,5};
//     int sz=5;
//     for (int st=0; st<sz; st++){
//         for (int end=st; end<sz; end++){
//             for (int i=st; i<=end; i++){
//                 cout<<array[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Brute force approach

// int main(){
//     int array[5]={2, 5, 6, -5, 6};
//     int sz=5;
//     int maxsum= INT_MIN;
//     for (int st=0; st<sz; st++){
//         int currentsum=0;
//         for (int end=st; end<sz; end++){
//             currentsum+=array[end];
//             maxsum=max(maxsum,currentsum);
//         }

//     }
//     cout<<"maximum subarray sum= "<<maxsum;
//     return 0;
// }

// kadane's algorithm
// int main()
// {
//     int nums[5] = {2, 5, 6, -5, 6};
//     int sz = 5;
//     int maxsum = INT_MIN;
//     int currentsum = 0;
//     for (int i = 0; i < sz; i++)
//     {
//         currentsum += nums[i];
//         maxsum = max(currentsum, maxsum);
//         if (currentsum < 0)
//         {
//             currentsum = 0;
//         }
//     }
//     cout<<maxsum;
//     return 0;
// }

//  pair sum in sorted array

// vector <int> pairsum(vector<int> nums, int target){
//     vector <int> ans;
//     int n= nums.size();
//     for (int i=0; i<n; i++){
//         for (int j=i+1; j<n; j++){
//             if (nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//     return ans;
// }

// int main(){
//     vector <int> nums={2,7,11,13,1,8};
//     int target=9;
//     vector<int> ans=pairsum(nums,target);
    
//     for (int i : ans){
//         cout<<i<<",";
//     }
// }

// optimized approch

// vector <int> pairsum(vector<int> nums, int target){
//     vector <int> ans;
//     int n= nums.size();
//     int i=0,j=n-1;
//     while (i<j){
//         int pairsum=nums[i]+nums[j];
//         if (pairsum<target){
//             i++;
//         }
//         else if (pairsum>target){
//             j--;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
    
// }

// int main(){
//     vector <int> nums={2,7,11,13};
//     int target=9;
//     vector<int> ans=pairsum(nums,target);
    
//     for (int i : ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// majorty element 2

// int main(){
//     vector <int> nums={ 1,2,2,2,1,3,3,3,5,5,5,5,5,5,5,5,5};
//     int freq=1,ans=nums[0];
//     int n=nums.size();
//     sort(nums.begin(),nums.end());
//     for (int i=1; i<n; i++){
//         if (nums[i]==nums[i-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=nums[i];
//         }
//         if(freq>(n/2)){
//             cout<<ans<<endl;
//             break;
//         }
//     }
//     return 0;
// }

// moorens algorithm

int main(){
    vector <int> nums={ 1,2,2,2,1,3,3,3,5,5,5,5,5,5,5,5,5};
    int freq=0,ans=0;
    int n=nums.size();
    for (int i=0; i<n; i++){
        if (freq==0){
            ans=nums[i];
        }
        if (ans==nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    cout<<ans;
    return 0;
}

