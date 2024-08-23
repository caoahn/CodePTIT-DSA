#include<bits/stdc++.h> 
using namespace std ;  
int n,m,s ;  
vector<int> v; 
int cnt = 0 ;  
vector<string> v1 ; 
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
void Try(int i,int pos,int sum,string res) { 
   if(pos > n || sum > s) { 
     return ; 
   } 
   if(pos == n && sum == s) { 
       res.pop_back() ; 
       v1.push_back(res) ; 
       res = "" ; 
   } 
   for(int j=i ; j<= v.size() ; j++) { 
      if(v[j] > m) { 
        if(sum + v[j] <= s) { 
           Try(j+1,pos + 1 , sum + v[j] , res + to_string(v[j]) + " ") ; 
		}
	  }
   }
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      solve() ;   
     cin >> n >> m >> s ; 
     v1.clear() ;  
     Try(0,0,0,"") ; 
	 cout << v1.size() << endl ;  
     for(auto it : v1) { 
       cout << it << endl ; 
	 }
   }
}
