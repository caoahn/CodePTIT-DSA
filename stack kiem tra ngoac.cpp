#include<bits/stdc++.h> 
using namespace std ;  
void solve() { 
   string s ; 
   cin >> s ; 
   stack<char> st ; 
   for(char x : s) { 
     if(x == '(') { 
         st.push(x) ; 
	 } 
	 else { 
	    if(st.empty()) { 
	       cout <<"INVALID" << endl ; 
		   return ;  
		} 
		else { 
		   st.pop() ; 
		}
	 }
   } 
   if(st.empty()) {  
     cout << "VALID" << endl ; 
   } 
   else cout <<"INVALID" << endl ; 
}
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     solve() ; 
  }
}
