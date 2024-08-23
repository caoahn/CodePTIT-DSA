#include<bits/stdc++.h> 
using namespace std; 
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          int n ; 
          cin >> n ; 
          queue<string> q ; 
          string s = "6" ; 
          string s2 = "8" ; 
          q.push(s) ;  
          q.push(s2) ; 
          vector<long long> v ;  
          while(!q.empty()) { 
                string tmp = q.front() ; 
                if(tmp.size() > n) { 
                      break ; 
                }  
                long long x = stoll(tmp) ; 
                v.push_back(x) ; 
                q.push(tmp+"6") ; 
                q.push(tmp+"8") ; 
                q.pop() ; 
          } 
          for(auto it : v) { 
                cout << it <<' ' ; 
          } 
          cout << endl ; 
      }
}