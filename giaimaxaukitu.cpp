#include<bits/stdc++.h> 
using namespace std ;
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
         string s;  
         cin >> s ; 
         stack<string> st ; 
         for(int i=s.size()-1 ; i >= 0 ; i--)  { 
              if(s[i] >= 'a' && s[i]  <= 'z') { 
                  st.push(string(1,s[i])) ; 
              } 
              else if(isdigit(s[i])) { 
                  int x = s[i] - '0' ; 
                  string s = ""; 
                  while(x--) { 
                      string fi = st.top() ; 
                      s += fi ; 
                      st.pop() ; 
                  } 
                st.push(s) ; 
              }
         }  
         cout << st.top() << endl ; 
      }
}