#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// print name for n times
void func1(int i, int n){
    if(i>n) return;
    cout<<"Ganesh"<<endl;
    func1(i+1,n);
}

//print number 1 to n
void func2(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    func2(i+1,n);
}

// print numbers n to 1 by uing backtracking
void func3( int n){
    if(n==0) return;
    cout<<n<<" ";
    func3(n-1);
}

// Sum of First N Numbers 
// paramiterised recursion
int sum = 0;
void func4( int n){
    if(n==0){
        cout<<"Sum : "<<sum;
    return;
    }
    sum+=n;
    func4(n-1); // used backtracking 
}
// Factorial of given number
// paramiterised recursion
int fact = 1;
void func5( int n){
    if(n==0){
        cout<<"factorial : "<<fact;
    return;
    }
    fact*=n;
    func5(n-1); // used backtracking 
}

// Sum of First N Numbers 
// Functional recursion
int func6( int n){
    if(n==0) return 0;
    return n+func6(n-1); // Functional recursion
}

// Factorial of given number
// Functional recursion
int func7( int n){
    if(n==0) return 1;
    return n*func7(n-1); // Functional recursion in this recursion fuction reurns the value 
}

void reverseArray(int i,int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

bool check(int i, string &s){
    if (i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return check(i+1,s);
}

int fibo(int n){
    if(n<=1) return n;
    int last=fibo(n-1);
    int slast=fibo(n-2);
    return last+slast;
}

int main(){
    int n;
    cin>>n;
    // func1(1,n);
    // func2(1,n);
    // func3(n);
    // func4(n);
    // func5(n);
    // cout<<func6(n)<<endl;
    // cout<<func7(n)<<endl;

    // int arr[5]={5,3,2,6,4};
    // reverseArray(0,arr,5);
    // for(int i=0; i<5; i++){
    //     cout<<arr[i]<<" ";
    // }

    // string s= "MADAM";
    // cout<<check(0,s);

    cout<<fibo(n);

    return 0;
}