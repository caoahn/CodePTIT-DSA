#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
        int n ; 
        cin >> n; 
        string s ; 
        cin >> s; 
        if(!next_permutation(s.begin(), s.end())) { 
           cout << n <<' ' << "BIGGEST" << endl ; 
        } 
        else cout << n <<" " <<s << endl ; 
    } 
    return 0 ; 
}