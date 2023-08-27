
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int longestPalindrome(string s) {
  int count[128] = {0};
  
  for(char c : s) {
    count[c]++; 
  }
  
  int ans = 0;
  for(int v : count) {
    ans += v/2 * 2;
    if(ans % 2 == 0 && v % 2 == 1) {
      ans++; 
    }
  }
  return ans;
}


int main(){
vector<int> v = {1 , 2 , 3 , 4};
for(auto& i : v)cout<<i<<endl; 
    // string s = ""
    string s = "abccccdd";
    // string s = "a";
    cout<<longestPalindrome(s);
return 0;
}
