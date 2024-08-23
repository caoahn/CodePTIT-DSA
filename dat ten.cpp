#include<bits/stdc++.h> 
using namespace std ;  
int n,k ; 
set<string> se ; 
map<int,string> mp ; 
int cnt ;  
int a[100],n1 ;  
void Try(int i) { 
   for(int j = a[i-1]+1 ; j <= n1-k+i ; j++) { 
       a[i] = j ; 
       if(i == k) { 
          for(int i=1 ; i <= k ; i++ )  { 
            cout << mp[a[i]] <<" " ; 
		  } 
		  cout << endl ; 
	   } 
	   else { 
	     Try(i+1) ; 
	   }
   }
}
int main() { 
   cin >> n >> k ; 
   for(int i=0 ; i< n ; i++) { 
      string x ; 
      cin >> x ; 
       se.insert(x)  ; 
   } 
    n1 = se.size() ; 
   cnt = 1 ; 
   mp[0] = {'0'} ; 
   for(auto x : se) { 
      mp[cnt] = x ; 
      ++cnt ; 
   } 
  Try(1) ; 
}
