#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
     int n ; 
     cin >> n ; 
     int a[n] ; 
	 vector<int> v ;  
     for(int i=0;i<n;i++){
     	cin >> a[i] ; 
		 v.push_back(a[i]); 
	 } 
     sort(a,a+n) ;  
     vector<int> v1 ; 
     for(int i=0 ; i < n ; i++) { 
       if(a[i] != v[i]) { 
           v1.push_back(i+1) ;  
           break ; 
	   } 
	 } 
	 for(int i=n-1 ; i>= 0 ; i--) { 
	    if(a[i] != v[i]) { 
	      v1.push_back(i+1) ;  
	      break ; 
		} 
	 }
	 for(auto x : v1) { 
	  cout << x <<" " ; 
	 } 
	 cout << endl ; 
  }
}
