#include<bits/stdc++.h> 
using namespace std; 
int n , u[100] ={0} ; 
int x[100] ; 
map<int,char> mp ; 
void Try(int i) { 
     for(int j=1 ; j<= n; j++) { 
          if(!u[j]) { 
              x[i] = j ;  
              u[j] = 1 ; 
              if(i == n) { 
                   for(int i=1 ; i<= n ; i++) { 
                     cout << mp[x[i]] ; 
                   }  
                   cout << ' ' ; 
              } 
              else { 
                 Try(i+1) ; 
              } 
              u[j] = 0 ; 
          }
     }
}
int main() { 
      int t ; 
      cin >> t; 
      while(t--) { 
          string  s ;
          cin >> s; 
          n = s.size() ; 
          mp[0]='0' ;
          int cnt = 1;   
          for(int i=0; i < n ; i++) { 
             mp[cnt] = s[i] ; 
             ++cnt ;  
          }
          Try(1) ; 
          cout << endl ; 
      }
}