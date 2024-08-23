#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ; 
      cin >> t ;
      while(t--)  { 
          int n ; 
          cin >> n ; 
          int cnt = 0 ; 
          queue<string> q ; 
          string s = "8" ; 
          string s2 = "6" ;  
          q.push(s2) ;  
          q.push(s) ;  
          vector<string> v ; 
          while(1) { 
              string x = q.front() ; 
              q.pop()  ; 
              v.push_back(x) ; 
              if(cnt > n) { 
                 break ; 
              } 
              q.push(x + "6") ; 
              q.push(x + "8") ; 
              ++cnt ; 
          } 
          sort(v.begin(),v.end(),greater<int>()) ; 
          for(auto it : v)  {
              cout << it << ' ' ; 
          } 
          cout << endl ; 
      }
} 
