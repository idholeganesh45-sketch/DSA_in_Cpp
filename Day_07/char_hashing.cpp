#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    // prestoring
    int hash [26]={0}; // for all lowercase alphabets
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;// for covert ascii to to indexes
    }
    // fech
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }

    return 0;
}