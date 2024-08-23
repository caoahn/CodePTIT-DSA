#include<bits/stdc++.h> 
using namespace std; 
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n  ; 
          queue<string> q ; 
          string s = "9" ; 
          q.push(s) ; 
          int cnt = 0 ;  
          while(1) { 
              string x  = q.front() ; 
              q.pop() ; 
              long long tmp = stoll(x) ; 
              if(tmp % n == 0)  { 
                 cout << tmp << endl ; 
                 break ; 
              }  
              q.push(x + "0") ; 
              q.push(x + "9") ; 
          }
      }
}