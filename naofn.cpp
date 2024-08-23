#include<bits/stdc++.h> 
using namespace std; 
void testcase(string s) { 
       stack<char> st; 
       for(int i=0; i < s.size() ; i++) { 
           if(s[i] != ')') { 
             st.push(s[i]) ; 
		   } 
		   else {  
		      int ok = 0 ; 
		      while(!st.empty()) { 
		         char x = st.top() ; 
		         st.pop() ; 
		         if(x == '+' || x == '-' || x == '/' || x == '*') { 
		           ok = 1 ; 
				 } 
				 if(x == '(') break ; 
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
      testcase(s) ; 
   }
}
