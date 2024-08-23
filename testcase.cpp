#include<bits/stdc++.h> 
using namespace std ;  
void test() { 
      int n; 
      cin >> n ; 
      int a[n] ;
      int f[n] ; 
      for(int i=0; i < n ; i++)  { 
          cin >> a[i] ; 
          f[i] = 1 ; 
          for(int j=0 ; j< i ; j++)  { 
               if(a[i] > a[j]) { 
                  f[i] = max(f[i],f[j]+1) ; 
               }
          }
      } 
      cout <<  *max_element(f,f+n) ; 
}
int main() {  
    int t ; 
    cin >> t ;
    while(t--) { 
       test() ; 
       cout << endl ;      
    }
}