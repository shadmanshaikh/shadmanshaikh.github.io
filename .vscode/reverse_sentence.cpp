#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string s = "the sky is blue";
    vector<char> str;
    for(auto& i : s){
        str.push_back(i);
    }
    reverse(str.begin() , str.end());
    for(auto& i : str){
        cout<<i<<endl;
    }
return 0;
}