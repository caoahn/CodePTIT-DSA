#include<bits/stdc++.h> 
using namespace std ; 
int n,k ; 
int a[1001] ; 
vector<string>v ;  
void Try(int i,int pos,string res) { 
   if(pos > k) return ; 
   if(pos == k) { 
      res.pop_back() ; 
      v.push_back(res) ; 
   }  
   for(int j=i; j <= n ; j++) { 
      if(pos <= k) { 
         Try(j+1,pos+1,res + to_string(a[j]) + " ") ; 
	  }
   }
}
int main() { 
   int t ; 
   cin >> t; 
   while(t--) {  
       cin >> n  >> k; 
      for(int i=1 ; i<= n ; i++) { 
        cin >> a[i] ; 
	  } 
	  v.clear() ; 
	  sort(a+1,a+n+1) ;  
	  Try(1,0,"") ; 
	  for(auto it : v) { 
	    cout << it << endl ; 
	  }
   }
}
