#include<bits/stdc++.h>
using namespace std ; 
int t,n,a[100][100] ; 
string res ="" ; 
vector<string> v ; 
int check ;  
int use[100][100] ; 
void Try(int i,int j,string res) { 
       if(!a[1][1]  || !a[n][n] ) { 
           return ; 
       }   
        if( i == n && j == n ) { 
          v.push_back(res) ; 
       } 
       if(a[i+1][j] == 1 && i != n && !use[i+1][j] ) { 
         use[i][j] = 1 ;  
         Try(i+1,j,res + "D") ; 
         use[i][j] = 0 ;  
       }
       if( a[i][j-1] == 1&& j != 1 && !use[i][j-1]) { 
          use[i][j] = 1 ; 
          Try(i,j-1,res + "L") ; 
          use[i][j] = 0 ; 
       }
       if(a[i][j+1] == 1 && j != n && !use[i][j+1]) { 
         use[i][j] = 1 ; 
         Try(i,j+1,res + "R") ; 
         use[i][j] = 0 ;  
       }   
         if(a[i-1][j] == 1 && i != 1 && !use[i-1][j] ) {  
            use[i][j] = 1 ; 
          Try(i-1,j,res + "U") ; 
           use[i][j] = 0 ; 
       }
}
int main() { 
     int t = 1 ; 
      cin >> t; 
      while(t--) { 
          cin >> n ;
          for(int i=1 ; i <=  n ; i++) { 
             for(int j=1; j <= n ; j++) { 
                 cin >> a[i][j] ; 
                 use[i][j] = 0 ; 
             }
          }  
          v.clear() ; 
          Try(1,1,"") ;  
          if(v.size() == 0) { 
             cout <<"-1" << endl ;  ; 
          } 
          else { 
              for(string &i : v) cout << i <<' ' ;   
              cout << endl ; 
          } 
      }
}