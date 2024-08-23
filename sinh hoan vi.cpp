#include<bits/stdc++.h> 
using namespace std ;  
void ktao(int a[],int n) { 
  for(int i=1 ; i<= n ; i++) { 
    a[i]=i; 
  }
}
int main() { 
   int t ; 
   cin >> t ; 
   while(t--) { 
      int n,a[100],ok=1 ; 
      cin >> n  ; 
	  ktao(a,n) ;  
      while(ok) { 
         for(int i=n ; i>= 1 ; i--) { 
           cout <<a[i]  ; 
		 } 
		 cout << " " ; 
		 int i=n-1 ; 
		 while(i >=1 && a[i] > a[i+1]) { 
		    --i ; 
		 } 
		 if(i == 0) { 
		    ok = 0 ; 
		 } 
		 else { 
		    int j=n ; 
		    while(a[i] > a[j]) --j ; 
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
	  cout << endl ; 
   } 
}
