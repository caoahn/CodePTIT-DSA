#include<bits/stdc++.h> 
using namespace std; 
int main() { 
     int t; 
     cin >> t ;
     while(t--) { 
          int n ; 
          cin >> n ; 
          int a[n] ; 
          for(int i=0 ; i < n ; i++)  cin >> a[i] ; 
          priority_queue<int,vector<int>,greater<int>> pq ;  
          for(auto it : a) pq.push(it) ; 
          long long ans = 0 ; 
          while(pq.size() > 1) { 
               long long top1 = pq.top() ; 
               pq.pop() ; 
               long long top2 = pq.top() ; 
               pq.pop() ; 
               ans += top1 + top2 ; 
               pq.push(top1+top2) ; 
          } 
          cout << ans << endl ; 
     }
}