#include<bits/stdc++.h>
using namespace std; 
int main() { 
      int  t ;
      cin >> t; 
      while(t--) { 
          int n ;
          cin >> n  ;
          int a[n] ; 
          for(int i=0; i < n ; i++) { 
              cin >> a[i] ; 
          } 
          stack<int> st ; 
          vector<int> v ;  
          for(int i=n-1 ; i>= 0 ; i--) {  
              while(!st.empty() && a[i] >= st.top()) { 
                  st.pop() ; 
              } 
              if(st.empty()) v.push_back(-1) ; 
              else v.push_back(st.top()) ; 
              st.push(a[i]) ;
          }
          for(int i=v.size()-1 ; i>= 0 ; i--) { 
               cout << v[i] <<' ' ; 
          } 
          cout << endl ; 
      }
} 