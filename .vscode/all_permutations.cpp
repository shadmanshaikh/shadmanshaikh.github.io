#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {1 , 2 , 3};
    sort(nums.begin() , nums.end());
    vector<vector<int>> ans;
    do{
        ans.push_back(nums);

        // for(auto& i : nums)
    }while(next_permutation(nums.begin() , nums.end()));

    // for(int i = 0 ; i < nums.size() ; i++){
    //     cout<<ans[i]<<" ";
    // }
    for(auto& innervec : ans){
        cout<<"[";
        for(auto& i : innervec){
            cout<<i;
        }
        cout<<"],";
        cout<<endl;
    }
    return 0;
}