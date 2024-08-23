#include<bits/stdc++.h> 
using namespace std ; 
void solve() { 
      string s ; 
      cin >> s;  
      stack<int> st;  
      for(int i=0; i <= s.size() ; i++) { 
          st.push(i+1) ; 
          if(s[i] == 'I' || i == s.size()) { 
                while(!st.empty()) { 
                      cout << st.top() ; 
                      st.pop() ; 
                }
          }
      }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          solve() ; 
          cout << endl ; 
      }
}