#include<bits/stdc++.h> 
using namespace std ; 
int main() {   
          int n ; 
          cin >> n ; 
          cin.ignore() ; 
          int a[100][100] ; 
          for(int i=1; i <= n ; i++) { 
              string s; 
              getline(cin, s) ; 
              stringstream ss(s) ;
              string tmp ;  
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