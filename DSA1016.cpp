#include<bits/stdc++.h> 
using namespace std; 
int n ;    
vector<string> v ; 
string s="" ; 
void Try(int k,int sum,string s) {
     for(int i=k ; i>=1 ; i--) { 
          if(sum == n) { 
             v.push_back("(" + s + ")") ;  
             return ; 
          } 
          else if(sum < n) { 
               Try(i,sum+i,s + to_string(i)) ; 
          }
     }
}
int main() { 
     int t ;   
     cin >> t; 
     while(t--) { 
          cin >> n ; 
          v.clear() ; 
          Try(n,0,"") ; 
          for(auto it : v) { 
             cout << it <<" " ; 
          } 
          cout << endl ; 
     }
}