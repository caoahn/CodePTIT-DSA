#include<bits/stdc++.h> 
using namespace std ;
int n,m ;   
int a[1005][1005] ; 
int c[1005][1005] ;     
void init() { 
      for(int i=0; i <=  n ; i++) { 
          for(int j=0; j<= m;j++) { 
               c[i][j] = -1 ; 
          }
      }
}
void bfs() { 
      init() ; 
      c[1][1] = 0 ; 
      queue<pair<int,int>> q ; 
      q.push( {1,1}) ; 
      
      while(!q.empty())  { 
          pair<int,int> tmp = q.front() ; 
          q.pop() ; 
          int i = tmp.first ; 
          int j = tmp.second ; 

          if(i <= n && i >= 1 && j + a[i][j] <= m && j + a[i][j] >= 1 && c[i][j+a[i][j]] == -1) { 
                 q.push({i, j + a[i][j]}) ; 
                 c[i][j+a[i][j]] = c[i][j] + 1 ;
          } 

          if(i + a[i][j] <= n &&  i + a[i][j] >= 1 && j <= m && j >= 1 &&  c[i+a[i][j]][j] == -1) { 
                q.push({i+a[i][j],j}) ; 
                c[i+ a[i][j]][j] = c[i][j]  + 1 ; 
          } 

          if(c[n][m] != -1) break ; 
      } 
      cout << c[n][m] << endl ; 
}
int main() { 
     int t ; 
     cin >> t; 
     while(t--) { 
          cin >> n >> m ; 
          for(int i=1 ; i <= n ; i++) { 
              for(int j=1 ; j <= m ; j++) { 
                  cin >> a[i][j] ; 
              }
          } 
       bfs() ; 
     }
}