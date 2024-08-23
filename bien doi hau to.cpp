#include<bits/stdc++.h> 
using namespace std ; 
bool check(string s) { 
   if(s == "+" || s== "-" || s == "*" || s == "/" || s== "^") { 
      return true ; 
   } 
   return false; 
} 
void test() { 
    int n ; 
    cin >> n ; 
	stack<long long> st ;  
	vector<string> v ;  
    for(int i=0; i < n ; i++) { 
        string s ; 
        cin >> s ; 
         v.push_back(s) ; 
	} 
	if(!check(v[0])) { 
	       for(int i=0; i < n ; i++) { 
	    if(!check(v[i])) { 
	        st.push(stoll(v[i])) ; 
		} 
		else { 
		   long long top2 = st.top() ; 
		   st.pop() ; 
		   long long top1  = st.top() ; 
		   st.pop() ;  
		   if(v[i] == "+") st.push(top2 + top1) ; 
		   else if(v[i] == "-") st.push(top1 - top2) ; 
		   else if(v[i] == "*") st.push(top2*top1) ; 
		   else st.push(top1/top2) ;  
 		}
	} 
	cout << st.top() << endl ;   
	} 
	else { 
	   for(int i=n-1; i >= 0 ; i--) { 
	    if(!check(v[i])) { 
	        st.push(stoll(v[i])) ; 
		} 
		else { 
		   long long top2 = st.top() ; 
		   st.pop() ; 
		   long long top1  = st.top() ; 
		   st.pop() ;  
		   if(v[i] == "+") st.push(top2 + top1) ; 
		   else if(v[i] == "-") st.push(top2 - top1) ; 
		   else if(v[i] == "*") st.push(top2*top1) ; 
		   else st.push(top2/top1) ;  
 		}
	} 
	cout << st.top() << endl ;
	}  
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      test() ; 
   }
}
