#include<bits/stdc++.h> 
using namespace std ; 
int n,k ; 
int a[1001] ; 
int ok = 1 ;  
void ktao() { 
   for(int i=1 ;i<=n ; i++) { 
      a[i] = 0 ; 
   }
}
void sinh() { 
    int i = n ; 
    while(i >= 1 && a[i] == 1) { 
       a[i] =  0 ; 
       --i ; 
	} 
	if(i == 0) { 
	  ok = 0 ; 
	} 
	else { 
	   a[i] = 1 ; 
	}
}  
int check(int a[]) {  
   int res = 0 ;
   int cnt = 0 ; 
     for(int i=1 ; i<= n ; i++) { 
       if(a[i] == 1) { 
        ++res ;  
	   } 
	   else res = 0 ;  
	    if(res == k) { 
	      ++cnt ; 
		} 
		if(res > k) return 0 ; 
	 } 
	if(cnt == 1) return 1 ; 
	else return 0 ; 
}
int main() { 
    int t;
    cin >> t ; 
    while(t--) { 
       cin >> n  >> k ;  
       ktao() ; 
       while(ok) { 
           if(check(a)) { 
             for(int i=1 ; i<= n ; i++) { 
                  if(a[i] == 1) cout << "A" ; 
                  else cout << "B" ; 
			 } 
			 cout << endl ; 
		   } 
		   sinh() ; 
	   } 
	}
}
