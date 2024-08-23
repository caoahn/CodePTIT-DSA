#include<bits/stdc++.h> 
using namespace std ; 
int n,m ; 
int a[1001][1001] ; 
vector<string> v ; 
int cnt = 0 ;   
void Try(int i,int j) { 
    if(i == n && j == m) { 
       ++cnt ; 
	} 
	if(i < n) Try(i+1,j) ; 
	if(j < m)Try(i,j+1) ; 
}
int main() { 
  int t ;
  cin >> t; 
  while(t--)  { 
      cin >> n >> m ; 
      for(int i=1 ; i<= n ; i++) { 
         for(int j=1; j <= m ; j++) { 
            cin >> a[i][j] ; 
		 }
	  }  
	  v.clear()  ; 
	  Try(1,1) ; 
	   cout << cnt  ; 
	   cnt = 0 ; 
	  cout << endl ; 
  }
}
