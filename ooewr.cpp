#include<bits/stdc++.h> 
using namespace std ; 
int n,t,a[100] ; 
set<int> se ; 
map<int,int> mp  ;  
bool check() { 
    for(int i=1 ;i<= n ; i++) { 
      if(a[i] == 0) { 
        return false ; 
	  }
	} 
	return true ; 
}  
bool check2() { 
  for(int i=1 ; i<= n ; i++) {
  	   mp[a[i]]++ ; 
  } 
  for(int i=1 ; i<= n ; i++) { 
     if(mp[a[i]] != 1) return false ; 
  }
  return true ;  
} 
bool check3() { 
   for(int i=1 ; i<= n-1 ; i++) { 
      if(abs(a[i] - a[i+1]) == 1) return false ; 
   } 
   return true ; 
}
int main() { 
  cin >> t ; 
  while(t--) { 
           cin >> n ; 
  for(int i=1 ; i<= n ; i++) { 
    a[i] = i ; 
  } 
  do {  
     if(check() && check3()) { 
        for(int i=1 ; i<= n ; i++) { 
           cout << a[i] ;
	 } 
	  cout << endl ; 
	 }
  } 
  while(next_permutation(a+1,a+n+1)) ; 
  }
}
