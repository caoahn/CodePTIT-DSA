#include<bits/stdc++.h>
using namespace std ; 
bool check(int a[],int n) { 
    if(a[1] == 0 && a[n] == 1) return true ; 
    return false ; 
}  
bool check2(int a[],int n) { 
  for(int i=1 ; i <= n-1 ; i++) { 
     if(a[i] == 0 && a[i+1]==0) return false ; 
  } 
  return true ; 
}
int main() { 
    int t ; 
    cin >> t ; 
    while(t--) { 
       int n,k,a[100],ok=1 ; 
       cin >> n ;  
       for(int i=1 ; i <= n ; i++) { 
          a[i] = 0 ; 
	   } 
	vector<string> v ; 
	   string s ="" ;  
	   while(ok) { 
	     if(check(a,n) && check2(a,n)) { 
	         for(int i=1 ; i<= n ; i++) { 
	          if(a[i] == 0)  { 
	             s+= "H" ; 
			  } 
	          else s +="A" ; 
			} 
	      v.push_back(s) ; 
			s= "" ;  
		 } 
		  int i = n ; 
	   while(i >= 1 && a[i] == 1) { 
	         a[i] = 0 ; 
	         --i ; 
	   } 
	   if(i == 0) { 
	      ok = 0 ; 
	   } 
	   else { 
	     a[i] = 1 ; 
	   }
	   }  
	   sort(v.begin(),v.end()) ;
	   for(auto x : v) { 
	     cout << x << endl ; 
	   } 
	}
}
