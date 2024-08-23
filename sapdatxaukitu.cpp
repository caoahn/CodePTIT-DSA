#include<bits/stdc++.h> 
using namespace std; 
int main() { 
      int t ;
      cin >> t ;
      while(t--) { 
          string s ; 
          cin >> s; 
          map<char,int> mp ;  
          int res = 0  ; 
          for(int i=0; i < s.size() ; i++) { 
             mp[s[i]]++ ;  
          }
          for(auto it : mp) { 
             if(it.second > res) { 
                 res = it.second ; 
             }
          }  
          int  ok = 0 ; 
          int n = s.size() ; 
          if( n % 2  == 0) { 
               if(res <= n - res) { 
                 ok = 1 ;  
                 cout <<"1" << endl ; 
               }
          } 
          else { 
              if(res <= n - res + 1) { 
                 ok = 1 ; 
                 cout <<"1" << endl ; 
              }
          } 
          if( ok == 0) cout <<"-1" << endl ;
      }
}