#include<bits/stdc++.h> 
using namespace std ;  
const int modul = 1e9+7 ; 
int main() { 
      int t ;
      cin >> t ;
      while(t--) { 
          long long n ; 
          cin >> n ; 
          long long a[n] ;  
          for(int i=0; i < n ; i++) { 
             cin >> a[i] ; 
          } 
          priority_queue<long long,vector<long long>,greater<long long>> pq ; 
          for(auto it : a) { 
             pq.push(it) ; 
          } 
          long long ans = 0 ; 
          while(pq.size() > 1) { 
              long long top1 = pq.top() ; 
              pq.pop() ; 
              long long top2 = pq.top(); 
              pq.pop() ; 
              ans = (ans%modul + top1%modul + top2%modul)%modul ; 
              pq.push( (top1%modul+top2%modul) % modul) ; 
          } 
          cout << ans << endl ; 
      }
}