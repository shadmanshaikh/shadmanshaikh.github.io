#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<string> nums = { "3" , "6" , "7", "10"};
        sort(nums.begin(),nums.end(),[](string &a, string &b){return a.size() == b.size() ? a < b : a.size() < b.size();});
    int k ;
    cout<<"enter the kth index of ele: ";
    cin>>k;
    cout<<"the kth element is : "<<nums[nums.size() - k]<<endl;
//    cout<<"enter the index to find the element at :";
//    int k ;
//    cin>>k;
//    if(k >= 0 && k <= ans.size()){
//     vector<string>::iterator it = ans.begin();
//     advance(it , k);
//     string  ele = *it;
//     cout<<"the element is: "<<ele;
//    }else{
//     cout<<"element doesn't exist";
//    }
   for(auto& num : nums){
    // if()
    cout<<num<<" ";
   }

    // map<char, int> mymap;
    // for(char c: s){
    //     mymap[c]++;
    // }
    // for(auto i = 0 ; i < mymap.size() ; i++){
    //     // cout<<i.first<<":"<<i.second<<endl;

    // }
    
    // for(auto& i : mymap){
    //     cout<<i.first<<":"<<i.second<<endl;
    // }
        // return false;
}