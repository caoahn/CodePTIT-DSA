#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001] ; 
vector<string> v ; 
void Try(int i,int sum,string res) { 
   if(sum > n) return  ; 
   if(sum == n) { 
      res.pop_back() ; 
      v.push_back("(" + res + ")") ; 
      res = "" ; 
   } 
   for(int j=i; j >= 0 ; j--) { 
      if(sum + a[j] <= n) { 
         Try(j,sum + a[j], res + to_string(a[j]) + " ") ; 
	  }
   }
}
int main() { 
  int t ; 
  cin >> t; 
  while(t--) { 
     cin >> n ; 
     for(int i=1; i <= n ; i++) { 
       a[i] = i ; 
	 } 
	 v.clear() ; 
	 Try(n,0,"") ; 
	 for(auto it : v) {  
	   cout << it <<" " ; 
	 } 
	 cout << endl ; 
  }
}
