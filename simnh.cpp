#include<bits/stdc++.h> 
using namespace std ;  
int n, a[100] , ok = 1  ;   
int check(int a[],int n) { 
   int l = 1 ; 
   int r = n ;  
   int tmp = 1 ; 
   while(l <= r) { 
      if(a[l] != a[r]) { 
        return 0 ; 
	  } 
	  ++l ; 
	  --r;  
   }  
   return 1 ; 
}
void ktao() { 
   for(int i=1 ; i<=n ; i++) { 
     a[i]= 0 ; 
   }
}
void sinh() { 
   int i= n ; 
   while(i >= 1 && a[i] == 1) { 
       a[i] = 0 ; 
       --i;
	  } 
   if(i == 0) { 
     ok = 0 ; 
    } 
    else a[i] = 1 ; 
} 
int main() { 
   cin >> n ; 
   ktao()  ;  
   int tmp = 0 ; 
   while(ok) { 
   if(check(a,n)) {  
     if(tmp == 1) cout << endl ; 
	 tmp = 0 ;   
      for(int i=1 ; i <= n ; i++) { 
         cout << a[i] <<" " ;
		  tmp= 1 ; 
	  } 
   } 
	  sinh() ; 
   }
}

