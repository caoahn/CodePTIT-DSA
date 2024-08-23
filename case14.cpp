#include<bits/stdc++.h>
using namespace std ; 
int n ; 
int a[1001][1001] ;  
int u[1001][1001] ;  
vector<string> v ; 
void Try(int i,int j,string res) { 
   if(a[0][0] == 0 || a[n-1][n-1] == 0) { 
     return  ; 
   } 
   if(i == n-1 && j == n-1) { 
     v.push_back(res) ;
	 res = "" ;  
     return ; 
   } 
   if(i != n-1 && a[i+1][j] == 1 && u[i+1][j] == 0) { 
       u[i][j] = 1 ; 
       Try(i+1,j,res+"D") ; 
        u[i][j] = 0 ; 
   } 
   if(j != n-1 && a[i][j+1] == 1 && u[i][j+1] == 0) { 
      u[i][j] = 1 ; 
      Try(i,j+1,res + "R") ; 
      u[i][j] = 0 ; 
   } 
   if(j != 0 && a[i][j-1] == 1 && u[i][j-1] == 0) { 
         u[i][j] = 1 ;  
         Try(i,j-1, res + "L") ; 
           u[i][j] = 0 ; 
   } 
   if(i != 0 && a[i-1][j] == 1 && u[i-1][j] == 0) { 
         u[i][j] = 1  ;
         Try(i-1,j,res + "U") ; 
         u[i][j] = 0 ; 
   }
}
int main()  { 
   int t ;
   cin >> t; 
   while(t--) { 
       for(int i=0; i <= 999 ; i++) { 
         for(int j=0; j <= 999 ; j++) { 
            u[i][j] = 0 ; 
		 }
	   } 
	   v.clear() ; 
        cin >> n ; 
        for(int i=0 ; i< n ; i++) { 
          for(int j=0; j < n ; j++) { 
             cin >> a[i][j] ; 
		  }
		}
		Try(0,0,"") ;  
		sort(v.begin(),v.end()) ; 
		if(v.size() == 0) cout <<"-1" << endl ; 
		else { 
		    for(auto it : v) { 
		  cout << it <<" " ; 
		} 
		cout << endl ;  
		} 
   }
}
