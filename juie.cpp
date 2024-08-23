#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
     int n,k ; 
     cin >> n >> k ; 
     int a[n] ; 
     for(auto &x : a) cin >> x ; 
     auto it = lower_bound(a,a+n,k) - a  ; 
     cout << it << endl ;  
}