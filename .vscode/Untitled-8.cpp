#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
vector<int> v = {1 , 2 , 3 , 4};
// for(auto& i : v)cout<<i<<endl; 
for(int i = 0 ; i < 10 ; i++){
    if(i <= i+1){
        cout<<i<<endl;
        // break;
    }
    // cout<<*max_element(i  , v.end())<<endl;
}
return 0;
}