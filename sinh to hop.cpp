#include<bits/stdc++.h> 
using namespace std ;
void ktao(int a[],int k) { 
   for(int i=1; i <= k;i++) { 
      a[i] = i ; 
   }
} 

int main() { 
   int t ; 
   cin >> t ; 
   while(t--) {     
       int n, k,a[100],ok=1  ; 
      cin >> n >> k ;   
      string s="" ; 
	  vector<string> v ;  
      ktao(a,k)  ; 
      while(ok) { 
         for(int i=1 ; i <= k ; i++) { 
           s += (char) (a[i]+'A'-1) ; 
		 } 
		 v.push_back(s) ; 
		 s="" ;   
		  int i = k ; 
       while(i >= 1 && a[i] == n-k+i) { 
       --i;
      }
      if(i == 0) { 
        ok =0 ; 
      } 
     else { 
      ++a[i] ; 
      for(int j=i+1 ; j <=k ; j++) { 
         a[j] = a[j-1]+1 ; 
	   }
      } 
	} 
	sort(v.begin(),v.end()) ; 
	for(auto x : v) { 
	  cout <<x << endl ; 
	}
   } 
}
