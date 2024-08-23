#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int n ; 
   cin >> n ; 
   int a[n] ;  
   vector<string> v ; 
   for(int &x : a) cin >> x; 
   for(int i=0 ; i < n-1 ; i++) {   
      int min = i ; 
     for(int j=i+1; j < n ; j++) { 
        if(a[j] < a[min]) { 
          min =j ;
		} 
	} 
	swap(a[i],a[min]) ; 
	 string s = "Buoc " + to_string(i+1) + ": " ;
	   for(int i=0; i < n ; i++) { 
	    s += to_string(a[i]) ; 
	    s += ' ' ; 
	} 
	s.pop_back() ; 
	v.push_back(s) ; 
	s="" ; 
	} 
	 for(int i = v.size()-1 ; i>=0; i--) { 
     cout << v[i]<< endl ; 
 } 	 
}

