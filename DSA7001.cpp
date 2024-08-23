#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
     string s ; 
     stack<int> st ; 
     while(cin >> s) { 
         if(s == "push") { 
              int k ; 
              cin >> k ; 
              cin.ignore() ; 
              st.push(k) ; 
         } 
         else if(s == "pop") { 
              st.pop() ; 
         } 
         else { 
              if(st.empty()) { 
                 cout << "empty" << endl ; 
              } 
              else { 
                 vector<int > v ; 
                 while(!st.empty()) { 
                      int tmp = st.top()  ; 
                      st.pop() ; 
                      v.push_back(tmp) ; 
                 } 
                 for(int i=v.size() - 1 ; i >=0 ; i--) { 
                     cout << v[i] <<' ' ;  
                     st.push(v[i]) ; 
                 } 
                 cout << endl ; 
              }
         }
     } 
     return 0 ; 
}