#include<bits/stdc++.h> 
using namespace std ;
int main() { 
    int t ;
    cin >> t; 
    while(t--) { 
        int n ; 
        cin >> n ; 
        int a[n] ; 
        for(int i=0; i < n ; i++) { 
          cin >> a[i] ; 
		} 
		stack<int> st ;
		vector<int> v ;
		for(int i=0; i < n ; i++) { 
		   while(!st.empty() && a[st.top()] <= a[i]) { 
		      st.pop() ; 
		   } 
		   if(st.empty()) v.push_back(i+1) ; 
		   else v.push_back(i - st.top()) ; 
		   st.push(i) ; 
		} 
		for(auto it : v) { 
		  cout << it <<" " ; 
		} 
		cout << endl ; 
	} 
}
