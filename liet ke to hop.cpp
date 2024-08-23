#include<bits/stdc++.h> 
using namespace std ; 
   int n,k ; 
   int a[1005] ; 
   set<int> se;  
     int b[1005] ; 
    int cnt=1 ; 
    vector<int> v  ; 
int main() { 
   cin >> n >> k ; 
   for(int i=0 ; i < n ; i++) { 
       int x ; 
	   cin >> x ;  
	  se.insert(x) ;  
   } 
  for(int i=1 ; i <=k ; i++) { 
    b[i] = i ; 
  } 
  v.push_back(0) ;  
  for(auto x: se) { 
      v.push_back(x)  ; 
  }
    int n2 = se.size() ; 
    int ok=1 ; 
   while(ok) { 
      for(int i=1; i<= k ; i++) { 
         cout << v[b[i]] << " " ; 
	  } 
	 cout << endl ; 
	 int i=k ; 
	 while(i >=1 && b[i] == n2-k+i) { 
	     --i ; 
	 } 
	 if(i ==  0) { 
	   ok = 0 ; 
	 } 
	 else { 
	    ++b[i] ; 
	    for(int j=i+1 ; j <= k ; j++) { 
	       b[j] = b[j-1]+1 ; 
		}
	 }
   } 
   return 0 ; 
}
