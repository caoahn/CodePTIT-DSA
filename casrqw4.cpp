#include<bits/stdc++.h> 
using namespace std ; 
void check(string s) { 
      stack<char> st ; 
      for(int i=0; i < s.size() ; i++) { 
          if(s[i] != ')') { 
             st.push(s[i]);
		  } 
		  else { 
		     int ok = 0 ; 
		     while(!st.empty()) { 
		        char tmp = st.top() ; 
		        st.pop() ; 
		        if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/') { 
		            ok = 1 ;
				} 
				if(tmp == '(') break ; 
			 } 
			 if(ok == 0) { 
			  cout << "Yes" << endl ;  
			  return ; 
			 }
		  }
	  } 
	  cout << "No" << endl ; 
}
int main() { 
   int t ;
   cin >> t;  
   cin.ignore() ; 
   while(t--) { 
      string s ; 
      getline(cin,s) ; 
      check(s) ; 
   } 
}
