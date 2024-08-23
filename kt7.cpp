#include<bits/stdc++.h> 
using namespace std ;
int n,k;
int a[1001] ; 
vector<string> v ; 
string res;
int cnt = 0;  
void Try(int i,int sum) { 
       if(sum > k) { 
         ++cnt ; 
         return ; 
       } 
       for(int j=i ; j<= n  ;j++) { 
          sum += a[j] ; 
         Try(j+1,sum+a[j]);
       }
} 
int main() { 
     int t ; 
     cin >> t; 
     while(t--) { 
          cin >> n >> k ; 
          for(int i=1 ; i<= n; i++) { 
             cin >> a[i] ; 
          } 
          sort(a+1,a+n+1) ; 
          v.clear() ;  
        Try(1,0) ;  
         cout << cnt << endl ; 
        cout << endl ;  
     }
}