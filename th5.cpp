#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ;
      cin >> t; 
      while(t--) { 
           int  n,k ; 
           cin >> n >> k ; 
           int a[n] ; 
           for(int i=0; i < n  ; i++) { 
             cin >> a[i] ; 
           }
           deque<int> q ; 
           for(int i=0; i < k ; i++) {  
              while( !q.empty() || a[i] > a[q.back()]) { 
                  q.pop_back() ; 
              } 
              q.push_back(i) ; 
           } 
           cout << a[q.front()] <<" " ; 
           for(int i=k ; i <= n-1 ; i++) { 
              if(q.front() <= i-k) { 
                  q.pop_front() ;
              } 
              while(!q.empty() || a[i] > a[q.back()]) { 
                   q.pop_back() ; 
              } 
              q.push_back(i) ; 
              cout << a[q.front()] << ' ' ; 
           } 
           cout << endl  ; 
      } 
}