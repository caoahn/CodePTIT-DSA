#include<bits/stdc++.h> 
using namespace std ; 
int n; 
int a[1001] ;  
vector<vector<int>> v ; 
void Try(int i,int sum,vector<int> res) { 
    for(int j=i+1; j<= n; j++) { 
       res.push_back(a[j]) ; 
       if((sum + a[j]) % 2 != 0) {  
          v.push_back(res) ; 
	   } 
     Try(j,sum + a[j],res) ;  
	   res.pop_back() ; 
	}
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) {  
      cin >> n ; 
      for(int i=1 ; i<= n ; i++) cin >> a[i] ;  
      v.clear() ; 
	  vector<int> res;  
      Try(0,0,res) ; 
      for(int i=0 ; i < v.size() ; i++) { 
         sort(v[i].begin(),v[i].end() , greater<int>()) ; 
	  } 
	  sort(v.begin(),v.end()) ;  
	  for(int i=0; i < v.size() ; i++) { 
	    for(int j=0 ; j< v[i].size() ;j++) { 
	      cout << v[i][j] <<" " ; 
		} 
		cout << endl ;
	  }
   }
}
