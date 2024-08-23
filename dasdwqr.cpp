#include<bits/stdc++.h> 
using namespace std; 
int main() { 
     int t ; 
     cin >> t;  
     while(t--) { 
           int n ; 
           cin >> n ; 
           int a[n] ;  
           stack<int> st ; 
           for(int i=0 ; i < n ; i++) { 
                cin >> a[i] ; 
           }  
           vector<int> v ; 
           for(int i=0; i < n ; i++) { 
               while(!st.empty() && a[i] >= a[st.top()]) { 
                    st.pop() ; 
               } 
              if(st.empty()) v.push_back(i+1) ; 
              else v.push_back(i-st.top()) ;  
              st.push(i) ; 
           } 
           for(int i=0; i < v.size() ; i++) { 
                cout << v[i] <<' ' ; 
           } 
           cout << endl ; 
     }
}