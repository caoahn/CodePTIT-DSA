#include<bits/stdc++.h> 
using namespace std ; 
bool check(char c) { 
  if(c == '+' || c == '-' || c == '*' ||c == '/') { 
    return true ; 
  } 
  return false ; 
}
int main() { 
   	int t; 
   	cin >> t; 
    while(t--) { 
       string s ; 
       cin >> s ;
       stack<long long> st ; 
       for(int i=0; i < s.size() ; i++) { 
          if(check(s[i])) { 
             long long fi = st.top(); 
             st.pop() ; 
             long long se = st.top(); 
             st.pop() ; 
             if(s[i] == '+') { 
                st.push(fi + se) ; 
			 } 
			 else if(s[i] == '-') { 
			    st.push(se - fi) ; 
			 } 
			 else if(s[i] == '*') { 
			    st.push(fi*se) ; 
			 } 
			 else st.push(se/fi) ; 
		  } 
		  else st.push(s[i] - '0') ; 
	   } 
	   cout << st.top() << endl ; 
	}
}
