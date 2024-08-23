#include<bits/stdc++.h>
using namespace std ;
vector<string> v ; 
int n,k ; 
int a[1001] ; 
void Try(int i,string res,int sum) { 
   if(sum > k) return ; 
   if(sum == k) { 
      res.pop_back() ; 
      v.push_back("[" + res + "]") ;   
      res ="" ; 
      return ; 
   } 
   for(int j=i; j<= n ; j++) { 
        if(sum + a[j] <= k) { 
          Try(j,res + to_string(a[j]) + " " ,sum + a[j]) ; 
		}
   }
}
int main() { 
   int t ; 
   cin >> t; 
   while(t--) { 
       cin >> n >> k ; 
       for(int i=1 ; i <= n ; i++) { 
           cin >> a[i] ; 
	   }  
	   sort(a,a+n) ; 
	   v.clear()  ; 
	   Try(1,"",0) ; 
	   if(v.size() == 0) cout <<"-1"  ; 
	   else { 
	      for(auto x : v) { 
	        cout << x ; 
		  }
	   }
	   cout << endl ; 
   }
}
