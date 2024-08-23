#include<bits/stdc++.h> 
using namespace std ; 
int n,k ;  
string s ; 
vector<string> v ; 
void Try(int i,int cnt,string res) { 
   if(cnt >  n) return ; 
   if(cnt == k) {  
        v.push_back(res) ; 
        return ; 
   } 
   for(int j=i ; j < n ; j++) { 
     if(cnt <= k) { 
       Try(j+1,cnt+1,res + s[j]) ; 
	 }
   }
}
int main()  { 
    int t ; 
    cin >> t;  
    while(t--) {  
      v.clear() ; 
      cin >> s ;  
      cin >> k ; 
	n = s.size() ;   
	Try(0,0,"") ;  
	set<string> se ; 
	for(int i=0 ; i < v.size() ; i++) { 
	  se.insert(v[i]) ; 
	} 
	 for(auto it : se) { 
	  cout << it << endl ; 
	 }  
}
}
