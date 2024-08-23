#include<bits/stdc++.h> 
using namespace std ;  
int n, k  ;  
int a[100] ; 
vector<string> v ;  
void Try(int i,int pos,string res) {  
     if(pos > k) { 
         return ; 
     }
      if(pos == k) {  
         res.pop_back() ; 
         v.push_back(res) ;  
         return ; 
      } 
      for(int j=i ; j<= n ; j++) { 
         if(j >= i) { 
              Try(j,pos+1,res + to_string(j) +' ') ;
         }
      }
} 
int main() { 
      cin >> n >> k ; 
      Try(1,0,"") ; 
      for(auto it : v) { 
         cout << it << endl ; 
      }
}