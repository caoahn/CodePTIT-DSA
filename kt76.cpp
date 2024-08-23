#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100] ,ok=1 ; 
void ktao(int a[],int n) { 
  for(int i=1 ; i<= n ; i++) { 
     a[i] = i ; 
  } 
} 
void sinh() { 
   int i= n-1 ; 
   while( i >= 1 && a[i] > a[i+1]) { 
      --i ; 
   } 
   if(i == 0 ) { 
     ok = 0 ; 
   } 
   else { 
     int j=n ; 
     while(a[i] > a[j]) --j ; 
     swap(a[i],a[j]) ; 
     int l=i+1 ; 
     int r = n ; 
     while(l < r) { 
       swap(a[l],a[r])  ; 
       ++l ;
       --r ; 
	 }
   }
}
int main () { 
   int t ; 
   cin >> t ; ; 
   while(t--) { 
      int n,a[100] ,ok=1 ; 
      cin >> n ;   
      int x[100] ;  
      for(int i=1 ; i<=n ; i++) { 
        cin >> x[i] ; 
	  }
      ktao(a,n) ;  
      int cnt = 1 ; 
	  int cnt2 = 0 ;   
      while(ok) { 
        for(int i=1 ; i<=n;i++) { 
          if(x[i] == a[i]) { 
            ++cnt2 ; 
		  }
		} 
		if(cnt2 == n) { 
		   cout << cnt << endl  ; 
		   break ; 
		} 
		  else {   
		    cnt2 = 0 ; 
		    ++cnt ; 
		    int i= n-1 ; 
   while( i >= 1 && a[i] > a[i+1]) { 
      --i ; 
   } 
   if(i == 0 ) { 
     ok = 0 ; 
   } 
   else { 
     int j=n ; 
     while(a[i] > a[j]) --j ; 
     swap(a[i],a[j]) ; 
     int l=i+1 ; 
     int r = n ; 
     while(l < r) { 
       swap(a[l],a[r])  ; 
       ++l ;
       --r ; 
	 }
   }
		}
	  } 
   }
}
