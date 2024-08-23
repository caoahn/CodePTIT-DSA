#include<bits./stdc++.h> 
using namespace std ; 
int main () { 
    int n ; 
    cin >> n ; 
    int a[n] ; 
    for(int &x : a) { 
       cin >>x ; 
    } 
    for(int x : a) cout << x << endl ; 
}