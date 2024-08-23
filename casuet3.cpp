#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int t;
   cin >> t; 
   while(t--) { 
      string s ; 
      cin >> s; 
      stack<char> st ; 
      for(int i=0;i< s.size() ; i++) { 
         if(s[i] != ')' && st.size() != 0) { 
            st.push(s[i]) ; 
		 } 
		 else { 
		     if(!st.empty() && st.top() == '(') { 
		         st.pop() ; 
			 } 
			 else st.push(s[i]) ; 
		 }
	  } 
	  int c1 = 0 ; 
	  int c2 = 0 ; 
	  while(!st.empty()) {  
	     char x = st.top() ; 
	     st.pop() ; 
	    if(x == '(') ++c1 ; 
	    else ++c2 ; 
	  } 
	  cout << c1/2 + c2/2 + c1%2 + c2%2 << endl; 
   }
}
