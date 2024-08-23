#include<bits/stdc++.h> 
using namespace std; 
int main() { 
    string s ;   
    stack<int> st ; 
     while(cin >> s) { 
         if(s == "push") { 
              int n ; 
              cin >> n ; 
              cin.ignore() ;  
              st.push(n) ;  
         } 
         else if(s == "pop") { 
               st.pop() ; 
         } 
         else { 
              if(st.empty()) { 
                 cout << "empty" << endl ;   
              }  
              else { 
                 vector<int> v ; 
              while(!st.empty()) { 
                  int res = st.top() ; 
                  v.push_back(res); 
                  st.pop() ; 
             } 
             for(int i = v.size()-1 ; i>= 0 ; i--) { 
                  cout << v[i] <<' ' ;  
                  st.push(v[i]) ; 
             } 
             cout << endl ; 
              }
         }
     }
}