#include<bits/stdc++.h> 
using namespace std ; 
int n, a[100],ok ; 
void ktao() { 
  for(int i=1 ;i<=n;i++) { 
    a[i] = i ; 
  }
} 
void sinh() {  
   int i = n - 1;  
   while(i >=1 && a[i] > a[i+1]) { 
      --i ; 
   } 
   if(i == 0) { 
      ok = 0 ; 
   } 
   else { 
     int j=n ; 
     while(a[i] > a[j]) -- j ; 
     swap(a[i],a[j]) ; 
     int l=i+1 ; 
     int r = n ; 
     while(l < r) { 
       swap(a[l],a[r]) ; 
       ++l ; 
       --r ; 
	 }
   }
}  
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) { 
    cin >> n ;  
    int x[n] ;  
    for(int i=1 ; i <=n;i++) { 
       cin >> x[i] ;
	}
    ok = 1 ; 
    ktao() ;  
    int cnt = 1 ;  
    int oke = 1  ; 
    while(ok) {  
	 for(int i=1 ; i<= n ; i++) { 
	  if(x[i] != a[i]) { 
	     oke = 0 ; 
	     break ; 
	  }
	}
	  if(oke == 1) { 
	     cout << cnt  ; 
	  } 
	  else { 
	    sinh() ;  
	    ++cnt ; 
		}
	}  
	cout << cnt ; 
	cout << endl ; 
  }
}
