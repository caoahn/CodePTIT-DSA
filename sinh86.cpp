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
    int l = 1 ; 
    int r = n; 
    while(l <= r) { 
      if(a[l] != a[r]) return 0 ; 
      ++l ; 
      --r ; 
	} 
	return 1 ; 
}
int main() { 
    int t;
    cin >> t ; 
    while(t--) { 
       cin >> n  ;  
       ktao() ; 
       while(ok) { 
           if(check(a)) { 
             for(int i=1 ; i<= n ; i++) { 
               cout << a[i] <<" " ; 
			 } 
			 cout << endl ; 
		   } 
		   sinh() ; 
	   } 
	}
}
