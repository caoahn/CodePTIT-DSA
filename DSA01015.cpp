#include<bits/stdc++.h>
using namespace std ; 
string s =""; 
int n,t,ok ; 
vector<long long> v ;  
void ktao() { 
     s = string(n,'0') ;
}  
void sinh() { 
     int i= n - 1 ; 
     while(i >= 1 && s[i] == '9') { 
         s[i] = '0' ; 
         --i ; 
     } 
     if(i == 0 ) { 
         ok= 0; 
     } 
     else { 
          s[i] = '9' ; 
     }
}
int main() {   
    for(int i=1 ; i <= 19 ; i++) { 
          n = i ;  
          ok = 1; 
          ktao() ;  
          while(ok) { 
            v.push_back(stoll(s)) ; 
             sinh() ; 
          }
    }
      cin >> t; 
      while(t--) { 
         int x ; 
         cin >> x ; 
        for(auto it : v ) { 
             if(it % x == 0 && it != 0) { 
                 cout << it << endl ; 
                 break ; 
             }
        }
      } 
      return 0 ; 
}