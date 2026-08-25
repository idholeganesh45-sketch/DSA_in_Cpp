#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
    int count=0;
    while (n>0){
        count++;
        n=n/10;
    }
    return count;
}

int reverseNum(int num){
    int revNum =0;
    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        revNum=revNum*10+lastDigit;
    }
    return revNum;
}

void pallindrome(int n){
    int revNum =0;
    int num=n;
    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        revNum=revNum*10+lastDigit;
    }
    if(revNum == n) cout<<"true";
    else  cout<<"false";
}

void ArmstromNum(int n){
    int ArmNum=0;
    int num=n;
    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        ArmNum=ArmNum+lastDigit*lastDigit*lastDigit;
    }
    if(ArmNum == n) cout<<"true";
    else  cout<<"false";
}
list<int> divisors(int n) {
    list<int> ls;
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    ls.sort();// TC is O(nlogn) n is the number of factor
// tc is O(sqrt of n
    for(auto it : ls){
        cout<<it<<" ";
    }
}

void checkPrime(int n){
    int check= 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            check=1;
            break;
        }
    }
    if(check==1) cout<<"Is not Prime Number";
    else cout<<"Is a Prime number";
}

void gcd(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2) n1= n1%n2;
        else n2= n2%n1;
    }
    if (n1==0) cout<<n2;
    else cout<<n1;
}
int main(){
    // cout<<countDigit(4);
    // cout<<reverseNum(40100);
    // pallindrome(1661);
    // // ArmstromNum(371);
    // divisors(36);
    // checkPrime(35);
    gcd(15,5);
    return 0;
}