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
          q.push("6") ; 
          q.push("8") ; 
        vector<long long> v ; 
          while(1) { 
              string x = q.front() ; 
              q.pop()  ; 
              int sz = x.size() ; 
              if(sz > n) { 
                 break ; 
              }
              long long tmp = stoll(x) ; 
              v.push_back(tmp)  ; 
              q.push(x + "6") ; 
              q.push(x + "8") ; 
          } 
          sort(v.begin(),v.end(),greater<long long> ()) ; 
          cout << v.size() << endl ;  
          for(auto it : v)  {
              cout << it << ' ' ; 
          } 
          cout << endl ; 
      }
} 