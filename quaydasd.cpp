#include<bits/stdc++.h> 
using namespace std ;
int n ; 
int a[1001] ;   
int u[1001]  ={0}; 
map<int, char> mp ; 
void Try(int i) { 
   for(int j=1 ; j <= n ; j++) { 
        if(u[j] == 0) { 
            a[i] = j ; 
            u[j] = 1; 
            if(i == n) { 
              for(int k=1 ; k<= n ; k++) { 
                 cout << mp[a[k]]; 
			  } 
			  cout << " " ; 
			} 
			else Try(i+1) ;  
			u[j] = 0 ; 
		}
   }
}	
int main() { 
   int t ;
   cin >> t ; 
   while(t--) { 
      string s ;
      cin >> s;  
      n = s.size() ; 
	  int cnt = 1 ; 
	  mp[0] = '0' ;  
      for(int i=0; i < s.size() ; i++) { 
         mp[cnt] = s[i] ; 
         ++cnt ; 
	  } 
	  Try(1) ;  
	  cout << endl ; 
   }
}
