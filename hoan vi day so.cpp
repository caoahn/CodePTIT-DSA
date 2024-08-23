#include<bits/stdc++.h> 
using namespace std ; 
bool cmp(int a,int b) { 
  return a < b ; 
}
int main () { 
  int n ; 
  cin >> n ; 
  int a[n] ; 
  for(int i=1 ; i<= n ;i++) { 
    cin >> a[i] ; 
  } 
  sort(a+1,a+n+1) ;  
  int ok = 1; 
  while(ok) { 
      for(int i=1 ; i<= n ; i++) { 
        cout << a[i] << " " ; 
	  }  
	  cout << endl ; 
       int i=n-1 ; 
       while(i >= 1 && a[i] > a[i+1]) { 
                --i ; 
      } 
      if(i==0) { 
        ok=0; 
	  } 
	  else { 
	     int j=n ; 
	     while(a[i] > a[j]) --j ; 
	     swap(a[i],a[j]) ; 
	     int l=i+1 ; 
	     int r=n ; 
	     while(l < r) { 
	       swap(a[l],a[r]) ; 
	       ++l ; 
	       --r ; 
		 }
	  }  
  } 
  return 0 ;  
}
