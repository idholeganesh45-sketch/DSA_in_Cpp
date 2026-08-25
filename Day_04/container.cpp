#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void ex_pair(){
    pair<int,int> p={2,3};
    cout<<p.second<<endl;
    cout<<p.first<<endl;
    pair<pair<int,int>,int> p1={{5,69},9};
    cout<<p1.first.second<<endl;
    cout<<p1.second<<endl;
    // Array of pairs
    pair<int,int> arr[]={{2,3},{6,9},{10,9},{5,8}};
    cout<<arr[0].first<<endl;
    cout<<arr[3].second<<endl;
    cout<<arr[2].first<<endl;
}

void ex_vector(){
    vector<int> v(5,10);
    v.push_back(5);
    v.emplace_back(3);
    v.push_back(2);
    v.emplace_back(6);
    v.push_back(15);
    v.emplace_back(9);
    v.push_back(25);
    v.emplace_back(3);
    v.push_back(51);
    v.emplace_back(13);

    for(vector<int> :: iterator it=v.begin(); it!=v.end(); it++){ // using iterators
        cout<< *it <<" ";
    }
    cout<<endl;

    for(auto it=v.begin(); it!=v.end();it++){// using auto with method
        cout<< *it <<" ";
    }
    
    cout<<endl;
    
    vector<int> v1(v);
    cout<<" after copy v1 "<<endl;
    for(auto it:v1){ // using direct auto keyword
        cout<< it <<" ";
    }
    cout<<endl;
    auto it=v1.begin()+6;
    cout<<*it<<endl;
    cout<<v.size()<<endl;
    v.pop_back();

    auto it1=v.end();
    cout<<*(it1)<<endl;

    v1.clear();
    v1.insert(v1.begin(),2);
    v1.insert(v1.begin(),3);
    v1.insert(v1.begin(),31);
    v1.erase(v1.begin()+1);
    for(vector<int> :: iterator it=v1.begin(); it!=v1.end();it++){
        cout<<*it<<" ";
    }
}



    

int main(){
    //ex_pair();
    //ex_vector();

    
    return 0;
}