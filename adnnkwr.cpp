#include<bits/stdc++.h>
using namespace std ; 
int main() { 
    int t ;
    cin >> t ; 
    while(t--) { 
        int n ; 
        cin >> n ; 
        int a[n] ;  
        int b[n] ; 
        for(int i=0; i < n ; i++)  { 
              cin >> a[i]  ; 
              b[i] = a[i] ;  
        } 
        stack<int> st ;
        vector<int> v;  
        for(int i=n-1 ; i>=0 ; i--) { 
               while(!st.empty() && a[i] >= st.top()) { 
                   st.pop() ; 
               } 
               if(st.empty()) { 
                  v.push_back(-1) ; 
               } 
               else v.push_back(st.top())  ; 
               st.push(a[i]) ; 
        } 
         vector<int> v2 ;  
         int res  ;  
        for(int i=v.size()-1; i >= 0 ; i--) { 
              if(v[i] == -1) { 
                  v2.push_back(-1) ; 
              } 
              else {  
                 int k = v[i] ; 
                 auto j = lower_bound(a,a+n,k) - a ; 
                  j = j + 1 ;  
                  while(j < n) { 
                      if(b[j] < v[i]) {   
                         res = b[j] ; 
                         break ; 
                      } 
                      else ++j ; 
                  } 
                  if(j == n) { 
                      v2.push_back(-1) ; 
                  } 
                  else v2.push_back(res) ; 
              }
        } 
         for(int i=0; i < v2.size() ; i++) {  
            cout << v2[i] << ' ' ; 
         } 
         cout << endl ; 
    }
}