#include<bits/stdc++.h>
using namespace std ; 
int solve(int a, int b, char res) { 
      if(res == '+') return a + b ; 
      else if(res == '-') return a - b ; 
      else if(res == '*') return a*b ; 
      else return a/b ; 
}
int main() { 
     int t ; 
     cin >> t ; 
     while(t--) { 
          string s ; 
          cin >> s;  
          stack<int> st ; 
          for(int i=s.size()-1 ; i>= 0 ; i--) { 
               if(isdigit(s[i])) { 
                     int c = s[i] - '0' ; 
                     st.push(c) ;  
               } 
               else { 
                  int a = st.top() ; 
                  st.pop() ; 
                  int b = st.top() ; 
                  st.pop() ; 
                  st.push(solve(a,b,s[i])) ; 
               }
          } 
          cout << st.top() << endl ; 
     }
}