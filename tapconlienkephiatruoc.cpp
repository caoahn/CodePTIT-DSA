#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ;
    cin >> t ; 
    while(t--) { 
         int n, k ; 
         cin >> n >> k ; 
         vector<int> v(k) ; 
         for(int i=0; i < k ; i++) { 
             cin >> v[i] ; 
         } 
         string s = string(n,'1') ; 
        for(int i=0 ; i < k ; i++) { 
              s[v[i] - 1] = '0' ; 
        } 
        prev_permutation(s.begin(),s.end()) ; 
        for(int i=0; i < s.size() ; i++) { 
             if(s[i] == '0') { 
                 cout << i+1 <<" " ; 
             }
        } 
        cout << endl ; 
    }
}