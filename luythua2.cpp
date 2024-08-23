#include<bits/stdc++.h> 
using namespace std ; 
const int du = 1e9+7  ; 
long long solve(long long a,long long b) { 
      if(b == 0) return 1  ; 
      if(b == 1) return a ; 
      long long x = solve(a , b/2) ; 
       if(b % 2 == 0){
        return (x%du*x%du)%du ; 
       }  
       else { 
         return (x%du * x%du * a) % du ; 
       }
}
int main(){
      int ok = 1;  
      while(ok) {  
          long long a,b ; 
          cin >> a >> b ; 
          if(a== 0 && b == 0) { 
             return 0 ; 
          } 
          cout << solve(a,b) << endl ; 
      } 
}