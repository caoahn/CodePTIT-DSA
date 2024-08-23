#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001] ;  
vector<vector<int>> v;   
int nt(int n) { 
   for(int i=2 ; i<= sqrt(n) ; i++) { 
      if(n % i == 0) return 0; 
   } 
   return n > 1 ; 
} 
int p[301] ; 
void solve() { 
   int cnt = 0 ; 
   for(int i=1; i<= 300 ; i++) { 
      if(nt(i)) { 
         p[cnt] = i ; 
         ++cnt ; 
	  }
   }
}
void Try(int i,int sum,vector<int> res) { 
     for(int j=i; j <= n ; j++) { 
        res.push_back(a[j]) ; 
        if(nt(sum + a[j])) { 
          v.push_back(res) ; 
		} 
		Try(j+1,sum + a[j],res) ; 
		res.pop_back() ; 
	 }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
       cin >> n ; 
       for(int i=1 ; i<= n ; i++) { 
          cin >> a[i] ; 
	   } 
	   v.clear() ; 
	   vector<int> res ; 
	   Try(1,0,res) ; 
	   for(int i=0 ; i < v.size() ; i++) { 
	     sort(v[i].begin(),v[i].end(), greater<int>()) ; 
	   } 
	   sort(v.begin(),v.end()) ; 
	   for(auto x : v) { 
	     for(auto y : x) { 
	       cout << y << " " ; 
		 } 
		 cout << endl  ;
	   }
   }
}
