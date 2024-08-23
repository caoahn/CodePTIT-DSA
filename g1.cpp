#include<bits/stdc++.h> 
using namespace std ;  
int check1(long long n) { 
      while(n!= 0) { 
          int x = n % 10 ; 
          if(x != 2 && x != 3 && x != 5 && x != 7 )  { 
               return 0 ; 
          } 
          n /= 10 ; 
      } 
      return 1 ; 
}
int check2(long long n,int n1) {  
    map<int,int> mp ;  
    int cnt = 0 ; 
      while(n!= 0) { 
          int x = n % 10 ; 
           mp[x]++ ; 
          n /= 10 ; 
      } 
      if(mp.size() == n1) { 
          return 1 ; 
      } 
      else return  0 ; 
}  
int check3(long long n) { 
   int x = n % 10  ; 
   if(x % 2 == 0) return  0 ; 
   else return 1 ; 
}
int main() { 
        int n ; 
        cin >> n ; 
        long long c1 = pow(10,n-1) ; 
        long long c2 = pow(10,n) ; 
        for(long long i=c1 ; i < c2 ; i++) { 
              if(check1(i) && check2(i,n) && check3(i)) { 
                   {
                          cout << i << endl ; 
                   } 
              }
  } 
}