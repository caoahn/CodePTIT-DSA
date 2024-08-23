#include<bits/stdc++.h> 
using namespace std ;  
int n,m,s ;  
vector<int> v; 
int cnt = 0 ;  
vector<vector<string>> v1 ; 
int check(int n) { 
  for(int i=2 ; i<= sqrt(n) ; i++) { 
    if(n % i == 0) return 0 ; 
  } 
  return n > 1;
} 
void solve() {  
   for(int i=0; i <= 300 ; i++) { 
      if(check(i)) { 
        v.push_back(i) ; 
	  }  
   }
} 
vector<int> v2 ;
void solve2() { 
   for(int i = 0 ; i<v.size() ; i++) { 
     if(v[i] > m) { 
        v2.push_back(v[i]) ; 
	 }
   }
}
void Try(int i,int pos,int sum, vector<string> res) { 
    for(int j=i ; j <= v2.size() ; j++) {  
       res.push_back(to_string(v2[j])) ; 
       if(pos <= n && sum + v2[j] <= s) { 
          if(pos == n && sum + v2[j] == s) { 
              v1.push_back(res) ; 
		  } 
		  else Try(j+1,pos+1,sum+v2[j], res) ; 
	   } 
	   res.pop_back() ; 
	}
}
int main() { 
   int t ;
   cin >> t; 
    solve() ; 
   while(t--) {   
     cin >> n >> m >> s ; 
	 v2.clear() ;  
     solve2() ; 
     v1.clear() ;  
     vector<string> res ; 
     Try(0,1,0,res) ; 
	 cout << v1.size() << endl ;  
      for(int i=0; i < v1.size() ; i++) { 
         for(int j=0; j < v1[i].size() ; j++) { 
           cout << v1[i][j] << " " ; 
		 } 
		 cout << endl ; 
	  }
   }
}
