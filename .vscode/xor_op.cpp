#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {3 , 5, 7, 9};
    int Xorop = 0;
    for(auto& i : nums){
        Xorop ^=i;
    }
    cout<<Xorop;

return 0;
}