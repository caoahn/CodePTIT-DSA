#include<bits/stdc++.h> 
using namespace std ;
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      string s ; 
      cin >> s; 
      stack<int> st; 
      for(int i=s.size()-1; i >= 0 ; i--)  { 
         if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') { 
               int fi = st.top() ; 
               st.pop() ; 
               int se = st.top() ; 
               st.pop() ; 
               if(s[i] == '+') {  
                  st.push(fi + se) ; 
			   } 
			   else if(s[i] == '-') { 
			      st.push(fi - se) ; 
			   } 
			   else if(s[i] == '*') { 
			      st.push(fi * se) ; 
			   } 
			   else st.push(fi/se) ; 
		 } 
		 else st.push(s[i] - '0') ; 
	  } 
	  cout << st.top() << endl ; 
   }
}
