#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string str1 = "abc";
    string str2 = "pqr";

    int n1 = str1.size();
    int n2 = str2.size();
    map<char ,int > ans;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2 ; j++){
            ans.push(str1[i],i);
            ans.push(str2[j] , j);

        }
    }   
    for(auto& i : ans){
        cout<<i<<" ";
    }
return 0;
}