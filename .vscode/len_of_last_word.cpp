#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
string s = "fly me   to   the moon";
vector<char> ans;
reverse(s.begin() , s.end());
for(auto& i :s){
    cout<<i;
    // ans.push_back(i);
}

return 0;

}