#include<bits/stdc++.h> 
using namespace std ; 
struct Node { 
    char c ; 
    Node *l ; 
    Node *r ; 
}; 
typedef Node* tree ; 
tree makeNode(char x) { 
    tree res = new Node ; 
	  res-> c = x ;  
	  res->l = NULL ; 
	  res->r = NULL ; 
	  return res ; 
} 
void solve(tree t) { 
    if(t != NULL) { 
        solve(t->l) ; 
        cout << t->c ; 
        solve(t->r) ; 
	}
}
int main() { 
    int t ; 
    cin >> t; 
    while(t--) { 
       string s ; 
       cin >> t; 
	   stack<tree> st;   
	   for(int i=0; i < s.size() ; i++) { 
	      if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') { 
	             tree tmp = makeNode(s[i]) ;  
	             tmp->r = st.top() ; 
	             st.pop() ; 
	             tmp->l=st.top() ; 
	             st.pop() ; 
	             st.push(tmp) ; 
		  } 
		  else st.push(makeNode(s[i])) ; 
	   } 
	   solve(st.top()) ;  
	   cout << endl ;  
	}
}