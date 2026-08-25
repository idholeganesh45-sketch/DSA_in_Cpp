#include<bits/stdc++.h>
using namespace std;
int main(){
    set <int> st;
    st.insert(2);
    st.emplace(1);
    st.emplace(5);
    st.emplace(3);
    st.emplace(3);
    st.emplace(9);

    auto it1 = st.lower_bound(1);
    auto it2 = st.upper_bound(3);
    auto it3 = st.lower_bound(5);
    cout<<*it1<<endl;
    cout<<*it2<<endl; 
    cout<<*it3<<endl;
    for (auto it=st.begin(); it!=st.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
