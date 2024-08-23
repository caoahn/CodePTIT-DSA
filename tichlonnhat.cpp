#include<bits/stdc++.h> 
using namespace std;  
int a[1005] ; 
int main() { 
     int n ; 
     cin >> n ; 
     vector<int> v1 ;   
     vector<int> v2 ; 
     for(int i=0; i < n; i++) { 
         cin >> a[i] ; 
     }   
      
     for(int i=0 ; i < n ; i ++) { 
          if(a[i] >= 0 ) { 
             v1.push_back(a[i]) ; 
          } 
          else v2.push_back(a[i]) ; 
     }  
     sort(v1.begin(),v1.end(),greater<int>()) ; 
     sort(v2.begin(),v2.end()) ; 

     long long p2= 1,p22 = 1; 
     if(v2.size()>= 2) { 
         for(int i=0; i < 2 ; i++) { 
              p2 *= v2[i] ; 
         }
     }

     if(v1.size() >= 2) { 
          for(int i=0; i < 2 ; i++) { 
             p22 *= v2[i] ; 
          }
     }
     long long m = max(p2,p22) ; 


     long long p3 = 1,p33 = 1; 
     if(v1.size() >= 3) { 
         for(int i=0; i < 3 ; i++) { 
              p3 *= v1[i] ; 
         }
     } 
     long long p333 = 1 ; 
     if(v1.size() != 0 && v2.size() >= 2) { 
          long long p13 = v1[0] ; 
          for(int i=0; i < 2 ; i++) { 
             p333 *= v2[i] ; 
          } 
          p33 = p333*p13 ; 
     }  
     long long p123 = 1  ; 
     if(v1.size() >= 3) { 
         for(int i=0; i < 3 ; i++) { 
             p123 *= v1[i] ; 
         }
     } 
     long long m1 = max(p3,p333) ; 
     long long m2 = max(m,p123) ; 
     cout << max(m,m2) << endl ; 
}