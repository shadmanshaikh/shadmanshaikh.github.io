#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    // vector<int> v = {1 , 4 , 3 , 2};
     vector<int> v = {6,2,6,5,1,2};
    vector<pair<int,int>> p ;
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = i + 1 ; j < v.size() ; j++){
            p.push_back(make_pair(v[i], v[j]));
        }
    }

    // for(auto& i : p){
    //     cout<<"("<<i.first<<","<<i.second<<")"<<endl;
    // }

    int n = p.size() - 1;
    vector<int> ans;
    // cout<<min(p[0].first , p[0].second)<<endl;
    // cout<<min(p[n].first , p[n].second)<<endl;

    // cout<<min(p[1].first , p[1].second)<<endl;
    // cout<<min(p[n-1].first , p[n-1].second)<<endl;

    
    // cout<<min(p[2].first , p[2].second)<<endl;
    // cout<<min(p[n-2].first , p[n-2].second)<<endl;

    for(int i = 0 ; i < p.size() ; i++){
        // for(int j = n ; j >0  ; j--){
            int sum  = min(p[i].first,p[i].second);
            ans.push_back(sum);
        // }
    }
    // for(auto& i : ans){
    //     cout<<i<<" ";
    // }
    vector<int> res;
    if(!ans.empty()){
        int sum  = ans.front() + ans.back();
        res.push_back(sum);
        // cout<<sum;
    }
    // for(auto& i : res){
    //     cout<<i<<" ";
    // }
    int front = 0 ;
    int back = ans.size() - 1;
    while(front < back){
        int sum = ans[front] + ans[back];
        res.push_back(sum);
        front++;
        back--;
    }
    // for(auto& i : res){
    //     cout<<i<<" ";
    // }

    int Maxe = *max_element(res.begin(), res.end());
    cout<<Maxe;



return 0;
}