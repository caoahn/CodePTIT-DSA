#include<bits/stdc++.h> 
using namespace std ; 
int main() 
{  
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n ; 
      cin >> n ; 
      int a[n] ; 
      set<int> se ; 
      for(int i=0;i<n;i++) { 
        cin >> a[i]  ; 
        se.insert(a[i]) ; 
	  } 
	 vector<int> v ; 
	 for(auto x : se) { 
	    v.push_back(x) ; 
	 }
	  int cnt = 0 ;  
	  for(int i=0; i < v.size() -1  ; i++) { 
	    cnt += v[i+1] - v[i] - 1 ; 
	  } 
	  cout << cnt << endl ; 
   }
}
