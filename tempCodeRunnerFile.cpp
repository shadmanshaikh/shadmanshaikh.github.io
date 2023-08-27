#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
// vector<int> v = {1 , 2 , 3 , 4};
// for(auto& i : v)cout<<i<<endl; 
// int k , n ,w ;

// cin>>k>>n>>w;
int k , w , n;
cin>>k>>n>>w;
int sum = 0;
for(int i = 1 ; i <= w ; i++){
     sum += i * k;
}
int ans = sum - n;
if(n >= sum ){
    ans = 0;
}else{
    ans = ans;
}
cout<<ans<<endl;


return 0;
}