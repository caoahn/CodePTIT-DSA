#include<bits/stdc++.h>
using namespace std ; 
int main() { 
     int t ; 
     cin >> t ; 
     stack<long long> st ; 
    string s ;  
     while(t--) {  
         cin >> s;    
         cin.ignore() ; 
         if(s == "PUSH") { 
             long long k ; 
             cin >> k ; 
             cin.ignore() ; 
             st.push(k) ; 
         } 
         else if(s == "POP") { 
              if(!st.empty()) { 
                 st.pop() ; 
              }
         } 
         else { 
             if(st.empty()) { 
                  cout <<"NONE" << endl ; 
             } 
             else { 
                 while(!st.empty()) { 
                    int res = st.top() ; 
                    cout << res << endl   ; 
                    break ; 
                 }
             }
         } 
     }
}