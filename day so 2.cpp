#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int  t ; 
  cin >> t; 
  while(t--) { 
     int n ; 
     cin >> n ; 
     queue<int> q ; 
     for(int i=0; i<n;i++) { 
       int x ; 
       cin >> x; 
       q.push(x) ; 
	 } 
	 vector<string> v ;  
	 string token = "" ; 
	 for(int i=1 ; i<= n;  ++i) { 
	    for(int j=n-i ; j>=0 ; j--) { 
	        int res = q.front() ; 
	         token += to_string(res) ; 
	        if(j) token += ' ' ;  
	        q.pop() ; 
	        res += q.front() ;  
	        if(j) q.push(res) ; 
		} 
		 string w = "[" + token + "]" ; 
		 v.push_back(w);
		 token ="" ; 
	 } 
	 int n1=v.size() ; 
	 for(int i=n1-1 ; i>= 0 ; i--) { 
	   cout <<v[i] << ' '; 
	 }  
	 cout << endl ;  
  }
}
