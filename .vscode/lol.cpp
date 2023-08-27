#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int func(int n){
    if(n == 0)return 0;
    int ans  = n + func(n-1);
    cout<<"->"<<n<<"+"<<n-1<<" = "<<ans<<endl;
    return ans;
}
int main(){
   
    int x = 3;
    int y = 2;
    func(5);
//    for(int i = 0 ; i < x; i++){
//         cout<<func1(x , y);
//    }
}