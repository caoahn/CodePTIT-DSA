#include<bits/stdc++.h> 
using namespace std;
int main() { 
   int t  ; 
   cin >> t; 
   while(t--) { 
         int n ; 
   cin >> n ; 
   int a[n+1] ; 
   a[0] = 0 ; 
   vector<string> v ; 
   for(int i=1 ; i<= n ; i++) cin >> a[i] ; 
   for(int i=1; i <= n-1  ; i++) { 
      for(int j=1;j<= n-i ; j++) { 
          if(a[j] > a[j+1]) { 
            swap(a[j],a[j+1]) ; 
		  }
	  }  
	  int ok = 1; 
	string s = "Buoc " + to_string(i) + ": " ;
	  for(int i=1; i <= n ; i++) { 
	    if(a[i] < a[i-1]) ok = 0 ; 	 
	    s += to_string(a[i]) ; 
	    s += ' ' ; 
	  }    
	  v.push_back(s) ;  
	  s.pop_back() ; 
	  s="" ;  
	  if(ok) break;   
   } 
   for(int i = v.size()-1 ; i>=0; i--) { 
     cout << v[i] << endl ; 
 } 	   
   }
}
