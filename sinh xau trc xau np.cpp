#include<bits/stdc++.h>  
using namespace std ; 
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) {  
       string s ; 
       cin >> s; 
       vector<int> v ; 
       for(int i=0; i< s.size() ; i++) { 
         v.push_back(s[i]-'0') ; 
	   } 
	   int i=v.size() - 1 ; 
	   while(i >= 0 && v[i] == 0) { 
	     v[i] = 1 ; 
	     --i ; 
	   } 
	   if(i < 0) {  
	   v[i] = 1 ; 
	      for(int i=0 ; i < v.size() ; i++) { 
	        v[i] = 1 ; 
		  } 
	   } 
	   else { 
	     v[i] = 0 ; 
	   } 
	   for(int i=0 ; i < v.size() ; i++) { 
	      cout << v[i] ; 
	   } 
	   cout << endl ; 
   }
}