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
             long long fi = stoll(st.top()) ; 
             st.pop() ; 
             long long se = stoll(st.top()); 
             st.pop() ; 
             if(s[i] == '+') { 
                st.push(fi + se) ; 
			 } 
			 else if(s[i] == '-') { 
			    st.push(fi - se) ; 
			 } 
			 else if(s[i] == '*') { 
			    st.push(fi*se) ; 
			 } 
			 else st.push(fi/se) ; 
		  } 
		  else st.push(stoll(s[i])) ; 
	   } 
	   cout << st.top() << endl ; 
	}
}
