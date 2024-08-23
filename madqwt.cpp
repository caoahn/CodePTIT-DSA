#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001][1001] ; 
vector<string> v ;  
void Try(int i,int j,string res) { 
     if(a[1][1] == 0 || a[n][n] == 0) { 
       return ; 
	 } 
	 if( i == n && j == n) { 
	     v.push_back(res) ;  
	     return ; 
	 } 
	 if(a[i+1][j] == 1 ) { 
	    Try(i+1,j,res + "D") ; 
	 } 
	 if(a[i][j+1] == 1 ) { 
	   Try(i,j+1,res + "R") ; 
	 }
}
int main() { 
  int t ;
  cin >> t; 
  while(t--)  { 
      cin >> n ; 
      for(int i=1 ; i<= n ; i++) { 
         for(int j=1; j <= n ; j++) { 
            cin >> a[i][j] ; 
		 }
	  }  
	  v.clear()  ; 
	  Try(1,1,"") ; 
	  sort(v.begin(),v.end())  ;  
	  for(auto x : v) { 
	   cout << x << " " ; 
	  } 
	  cout << endl ; 
  }
}
