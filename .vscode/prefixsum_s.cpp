#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums = {1 , 2 , 3 , 4, 5};
    vector<int> prefix_sum(nums.size());
     prefix_sum[0] = nums[0];

            // for(int i = 0 ; i < nums.size() ; i++){
            // for(int j = i + 1 ; j < nums.size() ; j++){
            //     int sum = 0;                
            //     sum += nums[i] + nums[j];
            //     cout<<sum<<" ";
            // }
    for(int i = 1 ; i < nums.size() ; i++){
        prefix_sum[i] = prefix_sum[i-1] + nums[i];
        cout<<prefix_sum[i]<<" ";

    }   

        // }
return 0;
}