#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
      int t ;
      cin >> t; 
      while(t--) {  
          int n ; 
          cin >> n ; 
          int a[100][100] ; 
          for(int i=1; i <= n ; i++) { 
              string s; 
              getline(cin,s) ; 
              string tmp ; 
              stringstream ss(s) ; 
              while(ss >> tmp) { 
                  a[i][stoi(tmp)] = 1 ; 
              }
          } 
          for(int i=1 ; i <= n ; i ++) { 
              for(int j=1; j <= n ; j++) { 
                  cout << a[i][j] <<' '  ; 
              } 
              cout << endl ; 
          }
      }
}
