#include<bits/stdc++.h>
using namespace std ;
int main() { 
      int t ; 
      cin >> t; 
      while(t--) {  
          int n ; 
          cin >> n ; 
          int a[n] ; 
          for(int i=0; i < n ; i++) { 
              cin >> a[i] ; 
          } 
          int c1[n], c2[n] ; 
         stack<int> st1, st2 ;  
         for(int i=n - 1 ; i>= 0 ; i--) { 
              while(!st1.empty() && a[i] >= a[st1.top()]) { 
                  st1.pop() ; 
              } 
              if(!st1.empty()) { 
                  c1[i] = st1.top()  ;  
               } 
               else c1[i] = -1   ;  
              st1.push(i) ; 
         }
         for(int i=n-1 ; i>=0 ; i--) { 
              while(!st2.empty() && a[i] <= a[st2.top()]) { 
                  st2.pop() ; 
               } 
               if(!st2.empty()) { 
                  c2[i] = st2.top()  ;  
               } 
               else c2[i] = -1   ; 
               st2.push(i) ; 
         } 
         for(int i=0; i < n ; i++) { 
              if(c1[i] == -1 || c2[c1[i]]== -1) cout << "-1" << ' ' ; 
              else cout << a[c2[c1[i]]] <<' ' ;  
         } 
         cout << endl ; 
      }
}