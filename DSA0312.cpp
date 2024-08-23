#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
         string s ; 
         cin >> s; 
         int n = s.size() ; 
         map<char,int> mp ; 
         for(int i=0 ; i < n ; i++) { 
             mp[s[i]]++ ; 
         } 
         int cnt = 0; 
         for(auto it : mp) { 
             if(it.second > 1) { 
                 cnt += it.second ; 
             }
         } 
         if(n - cnt >= (cnt-1)) { 
            cout <<"1" << endl ; 
         } 
         else cout <<"-1" << endl ; 
    }
}