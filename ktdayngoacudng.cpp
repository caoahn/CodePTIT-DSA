#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t ; 
      cin >>t ; 
      while(t--) { 
           string s ; 
           cin >> s; 
           stack<char> st ; 
           int ok = 1;  
           for(int i=0 ; i < s.size() ; i++)  { 
                 if(s[i]== '(' || s[i] == '{' || s[i] == '[') { 
                      st.push(s[i]) ; 
                 } 
                 else if(s[i] == ')') { 
                         if(st.empty()) ok = 0 ; 
                         else if(st.top() == '(') { 
                              st.pop() ; 
                         }
                 } 
                 else if(s[i] == '}') { 
                         if(st.empty()) ok = 0 ; 
                         else if(st.top() == '{') { 
                              st.pop() ; 
                         }
                 }
                 else if(s[i] == ']') { 
                         if(st.empty()) ok = 0 ; 
                         else if(st.top() == '[') { 
                              st.pop() ; 
                         }
                 }
           } 
           if(st.size() > 0 ) ok = 0 ; 
           if(ok==1)  cout<< "YES" << endl ; 
           else cout <<"NO" << endl ;  
      }
}