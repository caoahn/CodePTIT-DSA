#include<bits/stdc++.h> 
using namespace std ; 
int t,n,a[100][100] ; 
string res="" ; 
int check ; 
vector<string> v ;  
void Try(int i,int j,string res) {  
   if( i == 0 && j == 0 && a[i][j] == 0) { 
      check = 0 ; 
      return ; 
   }
    if( i == n-1 && j == n-1 ) { 
	    v.push_back(res) ; 
        check=1 ; 
        return ; 
	} 
	if(a[i+1][j] == 1) { 
	    Try(i+1,j,res+"D") ; 
	}  
	 if( a[i][j+1] == 1) { 
		Try(i,j+1,res+"R") ; 
	 }

}
int main() { 
   cin >> t ; 
   while(t--) { 
      cin >> n ;  
      for(int i=0 ; i < n ; i++) { 
         for(int j=0 ; j< n ; j++) { 
            cin >> a[i][j] ; 
		 }
	  }
       check = 0 ; 
	   v.clear() ;  
	   Try(0,0,"") ;  
	    if(check == 0) { 
	       cout <<"-1"  ; 
		}  
		 else { 
		   sort(v.begin() , v.end()) ; 
	        for(int i=0 ; i< v.size() ; i++) { 
	             cout << v[i] <<" " ; 
	   } 
		} 
	   cout << endl ; 
   }
}
