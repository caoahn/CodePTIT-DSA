#include<bits/stdc++.h> 
using namespace std ; 
int n,n1,k,a[100] ; 
vector<string> v ; 
map<int,string> mp ;     
set<string> se ; 
void in() { 
   for(int i=1 ; i <= k ; i++) { 
     cout << mp[i] <<" " ; 
   } 
   cout << endl ; 
}  
void Try(int i) { 
  for(int j=a[i-1]+1 ; j<= n1-k+i ; j++) { 
      a[i] = j ; 
      if(i == k) { 
         for(int i=1 ; i <= k ; i++) { 
             cout << mp[a[i]] <<" " ; 
     } 
           cout << endl ; 
	  } 
	  else { 
	     Try(i+1)  ; 
	  }
  }
} 
int main() { 
   cin >> n >> k ;  
    v.push_back("0") ; 
    string s ; 
    for(int i=0 ; i < n; i++) { 
         cin >>  s ; 
         se.insert(s) ; 
	} 
	n1 = se.size() ;  
	for(auto x : se) { 
	   v.push_back(x) ; 
	} 
	int cnt=0 ; 
	for(int i=0 ; i< v.size() ; i++) { 
	     mp[cnt] = v[i] ; 
		 ++cnt ;    
	} 
	Try(1) ; 
   return 0 ;   
}
