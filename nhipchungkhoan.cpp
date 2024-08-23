#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ; 
      cin >> t;  
      while(t--) { 
           int n ; 
           cin >> n ; 
           int a[n]  ; 
           map<int,int> mp ;  
           for(int i=0; i < n  ; i ++) { 
              cin >> a[i] ;   
           }  

        stack<int> st ; 
        vector<int> v ;   
        vector<int> v2 ;  
        int cnt = 0 ; 
        for(int i=0; i < n ; i++) { 
              while(!st.empty() && a[st.top()] <= a[i]) { 
                  st.pop() ; 
              } 
              if(st.empty()) v2.push_back(i+1) ; 
              else v2.push_back(i - st.top()) ;  
              st.push(i) ; 
        } 
        for(int i=0; i < v2.size() ; i++) { 
             cout << v2[i] << ' ' ; 
        } 
        cout << endl ; 
      }
}