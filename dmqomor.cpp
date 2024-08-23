#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   int a[n] ; 
   for(int &x : a) cin >> x;   
   vector<string> v ;  
   string f = "Buoc 0: " + to_string(a[0]) ; 
    v.push_back(f);
   for(int i=1 ; i < n ; i++) {   
      int x = a[i] , pos = i-1 ; 
      while(pos >= 0 && x < a[pos]) { 
         a[pos+1] = a[pos] ; 
         --pos; 
	  } 
	  a[pos+1] = x ;
	string s = "Buoc " + to_string(i) + ": " ;
	   for(int j=0; j <= i ; j++) { 
	     s += to_string(a[j]) ; 
	    s += ' ' ; 
	} 	  
	s.pop_back() ; 
	v.push_back(s) ; 
	s="" ;  
   } 
   for(int i = v.size()-1; i >= 0 ; i--) { 
     cout << v[i]<< endl ; 
 } 	 
}
