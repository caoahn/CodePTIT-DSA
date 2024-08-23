#include<bits/stdc++.h> 
using namespace std ;
int main() { 
  int n  ; 
  cin >> n ; 
  int a[n] ;  
  int ok = 1; 
  for(int i=0; i < n; i++) { 
    cin >> a[i] ; 
	if(a[i] == 0) { 
	  ok = 0 ; 
	} 
  }  
  int cnt = 0 ; 
  int res = -1; 
  for(int  i = 0;  i< n ; i++) { 
     int sum = 0 ; 
     for(int j=i ; j<n;j++) { 
        sum += a[j] ;  
        if(sum == 0 && sum != res) { 
         ++cnt ; 
		} 
	  res = sum ;  
	 }
  } 
  cout << cnt << endl ; 
}
