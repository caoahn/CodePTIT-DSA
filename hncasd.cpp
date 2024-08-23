#include<bits/stdc++.h> 
using namespace std;  
int a[1001] ;  
int n,k; 
map<int,string> mp ; 
void Try(int i) { 
   for(int j=a[i-1]+1 ; j<= n-k+i ; j++) { 
      a[i] = j ; 
      if(i == k) { 
        for(int z = 1 ; z <= k ; z++) { 
          cout << mp[a[z]] <<" " ; 
		} 
		cout << endl ; 
	  } 
	  else Try(i+1) ; 
   }
}
int main() { 
   cin >> n >> k ; 
   mp[0] = "0" ; 
   int cnt = 1;    
   set<string> se; 
   for(int i=0; i < n ; i++) {  
      string s ; 
      cin >> s; 
       se.insert(s) ; 
   }  
   n = se.size() ; 
    for(auto it : se) { 
       mp[cnt] = it ; 
       ++cnt ; 
	} 
	Try(1); 
}
