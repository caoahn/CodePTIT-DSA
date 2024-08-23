#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t;
      cin >> t ; 
      while(t--) { 
          int d ;
          cin >> d ; 
          string s ; 
          cin >> s ;
          map<char,int> mp ; 
          for(int i=0; i < s.size() ; i++) { 
             mp[s[i]]++ ; 
          }  
          int res = 0 ; 
          for(auto it : mp) { 
              if(it.second > res) res = it.second ; 
          } 
          if((res-1)*(d-1) > s.size() - res) cout <<"-1" << endl ; 
          else cout <<"1" << endl ; 
      } 
      return 0 ; 
}