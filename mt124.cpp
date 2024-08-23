#include<bits/stdc++.h> 
using namespace std ;  
int n ; 
int a[1001][1001] ;  
int u[1001][1001];  
vector<string> v;  
void Try(int i,int j,string res) { 
       if(a[1][1] == 0 || a[n][n] == 0) { 
          return ; 
       } 
       if(i == n && j == n) { 
            v.push_back(res) ; 
            return ; 
       } 
       if(a[i+1][j] == 1 && i != n && !u[i+1][j]) { 
            u[i+1][j] = 1;  
            Try(i+1,j,res  + "D") ; 
             u[i+1][j] = 0;
       } 
       if(a[i][j+1] == 1 && j != n && !u[i][j+1]) { 
           u[i][j+1] = 1 ; 
            Try(i,j+1,res + "R") ; 
            u[i][j+1] = 0 ; 
       } 
       if(a[i][j-1] == 1 && j != 1 && !u[i][j-1]) { 
            u[i][j-1] = 1  ; 
            Try(i,j-1,res+"L") ; 
            u[i][j-1] = 0  ; 
       } 
       if(a[i-1][j] == 1 && i != 1 && !u[i-1][j]) { 
           u[i-1][j] = 1; 
           Try(i-1,j,res+"U")  ; 
           u[i-1][j] = 0 ; 
       }
}
int main() { 
       int t  ; 
       cin >> t; 
       while(t--) { 
           cin >> n ;  
           for(int i=1 ; i<= n ; i++) { 
              for(int j=1 ; j <= n ; j++) { 
                  cin >> a[i][j] ; 
              }
           }  
         v.clear() ; 
          Try(1,1,"") ; 
          for(auto it : v) { 
            cout << it << ' ' ; 
          }  
          cout << endl ; 
       }
}