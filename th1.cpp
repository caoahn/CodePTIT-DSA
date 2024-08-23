#include<bits/stdc++.h> 
using namespace std; 
int n  ; 
int a[1001] ;   
int ok ; 
void ktao() { 
     for(int i=1 ; i<= n ; i++) { 
         a[i] = 0 ; 
     }
}  
bool check() { 
      int sum = 0 ; 
      for(int i=1 ; i<= n ; i++) { 
         sum += a[i] ; 
      } 
      if(sum % 2 == 0) { 
          return true ;
      }
      else return false ; 
} 
void sinh() { 
      int i=n ; 
      while(i >= 1  && a[i] == 1) { 
         a[i] = 0 ; 
         --i ; 
      } 
      if(i == 0) { 
          ok= 0 ; 
      } 
      else { 
         a[i] = 1; 
      }
}
int main() { 
     cin >> n ; 
     ktao() ; 
     ok = 1  ; 
      while(ok) {  
        if(check()) { 
                for(int i=1 ; i<= n ; i++) {  
                  cout << a[i] <<' ' ; 
             } 
             cout << endl ; 
        }
             sinh() ; 
      } 
}