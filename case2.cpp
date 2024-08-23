#include<bits/stdc++.h> 
using namespace std ; 
int n; 
int a[1001] ;  
vector<vector<int>> v ;  
int check(int n) { 
  for(int i=2  ; i <= sqrt(n) ; i++) { 
     if(n % i == 0) return 0 ; 
  } 
  return n > 1 ; 
}
void Try(int i,int sum,vector<int> res) { 
    for(int j=i+1; j<= n; j++) { 
       res.push_back(a[j]) ; 
       if(check(sum + a[j])) {  
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
