#include<bits/stdc++.h> 
using namespace std ;
int main() { 
     int t ; 
     cin >> t; 
     while(t--) { 
           string s ; 
           cin >> s ; 
           stack<char> st ; 
           for(int i=0; i < s.size() ; i++) { 
                 if(s[i] == '(' || s[i] == ')' && st.size() == 0) { 
                       st.push(s[i]) ; 
                 } 
                 else if(s[i] == ')') { 
                    if(st.size() > 0 && st.top() == '(') { 
                          st.pop() ; 
                    } 
                    else st.push(s[i]) ; 
                 }
           } 
           int d1 = 0 ; 
           int d2 = 0 ; 
           while(!st.empty()) { 
               if(st.top() == '(') { 
                  d1++ ;  
               } 
               else d2++ ; 
               st.pop() ; 
           } 
           int res = d1/2 + d2/2 + d1%2 + d2%2 ; 
           cout << res << endl ; 
     }
}