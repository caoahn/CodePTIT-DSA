#include<bits/stdc++.h>
using namespace std ; 
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
         string s  ; 
          int k ;  
          cin >> k >> s;  
          map<char,int> mp ; 
          for(int i=0; i < s.size() ; i++) { 
                mp[s[i]]++ ; 
          }  
          set<int> se; 
          vector<int> v ;  
         for(int i=0; i < s.size() ; i++) { 
              if(mp[s[i]] != 0) { 
                  v.push_back(mp[s[i]]) ; 
                  mp[s[i]] = 0 ;
              }
         }
         priority_queue<int> pq; 
         for(auto it : v) { 
            pq.push(it) ; 
         } 
         while(k--) { 
              long long x = pq.top() ; 
              pq.pop() ; 
              --x;
              pq.push(x) ; 
         } 
         long long sum = 0 ; 
         while(!pq.empty()) { 
               sum += pow(pq.top(),2) ; 
               pq.pop() ; 
         } 
         cout << sum << endl ; 
      }
}