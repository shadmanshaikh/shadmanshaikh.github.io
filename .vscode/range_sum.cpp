#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {-2 , 5 , -1};
    cout<<accumulate(nums.begin() , nums.end() , 0);
return 0;
}