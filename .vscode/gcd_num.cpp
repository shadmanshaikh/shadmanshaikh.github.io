#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main(){
    int a = 10 ;
    int b = 6 ;
    cout<<gcd(a , b);
return 0;
}