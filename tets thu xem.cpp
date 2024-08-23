#include<bits/stdc++.h> 
using namespace std ; 
int a[100][100] ; 
int check  ; 
 int t,n ; 
 vector<string> v ; 
 string res ="" ; 
 void Try(int i,int j, string res) { 
    if(i == 1 && j == 1 && a[i][j] == 0) { 
      check =0 ; 
      return ; 
	}
	if(i == n && j == n) { 
	    v.push_back(res) ; 
	    check = 1 ; 
	    return ; 
	} 
	if(i < n && a[i+1][j]) { 
	    Try(i+1,j,res + "D") ; 
	} 
	if(j<n && a[i][j+1]) { 
	   Try(i,j+1,res + "R") ; 
	}
 } 
int main() { 
   cin >> t ; 
   while(t--) { 
      cin >> n ; 
      for(int i=1; i <= n ; i++) { 
         for(int j = 1 ; j<= n ; j++) { 
            cin >> a[i][j] ; 
		 }
	  }  
	  check = 0 ; 
	  v.clear() ; 
	  Try(1,1,"") ; 
	  if(check == 0) { 
	    cout <<"-1"  ; 
	  } 
	  else { 
	    sort(v.begin(),v.end()) ; 
	    for(auto x : v) { 
	      cout << x <<" "  ; 
		}
	  } 
	  cout << endl ; 
   }
}
