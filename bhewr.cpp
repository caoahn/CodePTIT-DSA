#include<bits/stdc++.h> 
using namespace std;  
int n ; 
int a[1001] ;  
vector<string> v ; 
string res = "" ; 
string token = "" ; 
void Try(int i) { 
   if(i <= 0) return ; 
   for(int j=1 ; j<= i ; j++) { 
       res += to_string(a[j]) ;  
      if(j != i) {  
        res += " " ; 
	  }
   } 
    token = "[" + res + "]" ;  
   v.push_back(token) ; 
   token = res = "" ;  
   for(int j=1 ; j< i;j++) { 
      a[j] += a[j+1] ; 
   } 
   Try(i-1) ; 
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      cin >> n ; 
      for(int i=1 ; i<= n ;i++) cin >> a[i] ;  
      v.clear() ; 
 	  Try(n) ;  
	  for(auto x : v) { 
	    cout << x << endl ; 
	  } 
   }
}
