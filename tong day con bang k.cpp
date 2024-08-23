#include<bits/stdc++.h> 
using namespace std ;   
int n,a[1000],b[1000],k,ok = 1;  
void ktao() { 
  for(int i=1 ; i<= n ; i++) { 
    a[i] = 0 ; 
  }
} 
void sinh() { 
    int i=n ; 
    while(i >= 1 && a[i] == 1) { 
        a[i] = 0 ; 
        --i ; 
	} 
	if(i == 0) { 
	   ok = 0 ;
	} 
	else { 
	  a[i] = 1 ; 
	}
} 
bool check() { 
   int sum = 0 ; 
   for(int i=1 ;i<= n ;i++) { 
     if(a[i]) { 
       sum += b[i] ; 
	 }
   } 
   return sum == k ; 
}
int main() { 
   cin >> n >> k ; 
   for(int i=1 ; i<=n;i++) { 
     cin >> b[i] ; 
   } 
   int s =0; 
   ktao() ; 
   while(ok) { 
       if(check()) { 
	     ++s ;  
         for(int i=1 ; i<= n ;i++) { 
            if(a[i]) { 
               cout << b[i] <<" " ; 
			}
		 } 
		 cout << endl ; 
	   } 
	   sinh() ; 
   } 
   cout << s << endl ;   
   return 0 ; 
}
