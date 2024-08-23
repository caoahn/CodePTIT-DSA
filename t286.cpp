#include<bits/stdc++.h> 
using namespace std;
bool check(string s) { 
    if(s== "*" || s== "+" || s == "-" || s== "^" || s== "/") return true ;
    return false; 
} 
void test() { 
     int n ; 
     cin >> n ;
     vector<string> v ;
     stack<long long> st; 
     long long ans = 0 ;
     for(int i=0; i < n ; i++) { 
          string s ; 
          cin >> s ;
          v.push_back(s) ; 
	 } 
	 for(int i=0 ; i < n ; i++) { 
	     if(!check(v[i])) { 
	       st.push(stoll(v[i])) ; 
		 } 
		 else { 
		     long long top2 = st.top() ; 
		     st.pop() ; 
		     long long top1 = st.top() ; 
		     st.pop() ; 
		     if(v[i] == "+") st.push(top1 +top2) ; 
		     else if(v[i] == "-") st.push(top1-top2) ; 
		     else if(v[i] == "*") st.push(top1*top2) ; 
		     else st.push(top1/top2) ;  
		 }
	 } 
	 cout << st.top() << endl ; 
}
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
        test()  ; 
	} 
	return 0 ; 
}
