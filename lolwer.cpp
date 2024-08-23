#include<bits/stdC++.h> 
using namespace std ; 
int n,a[100] ;  
void back(int i) { 
       for(int j=0;j <= 1; j++) { 
             a[i] = j ; 
             if(i ==  n) { 
                  for(int i=1; i <= n ; i++) { 
                       cout << a[i]  ; 
                  } 
                  cout << endl ; 
             } 
             else back(i+1) ; 
       }
} 
int main() {
     cin >> n ; 
     back(1) ; 
     return 0 ; 
}
