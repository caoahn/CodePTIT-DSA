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
         sort(v.begin(),v.end()) ;  
         for(int i=v.size()-1 ; i>=0 ; i--) { 
                if(v[i] > k) { 
                      v[i] = v[i] - k  ; 
                      break ; 
                } 
                else { 
                      k = k - v[i] ;  
                      v[i] = 0 ;
                }
         } 
         long long sum = 0 ; 
         for(int i=0; i < v.size() ; i++) { 
               sum += pow(v[i],2) ; 
         } 
            cout << sum << endl ; 
      } 
}