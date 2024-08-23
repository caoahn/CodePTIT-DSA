#include<bits/stdc++.h> 
using namespace std ; 
int a[100] ; 
int n , n1; 
int u[100]  ={0}; 
map<int,string> mp ;  
string token ; 
void Try(int i) { 
     for(int j=1 ; j <= n1 ; j++) { 
          if(!u[j]) { 
              a[i] = j ; 
              u[j] = 1 ; 
              if(i == n1) { 
                   for(int i=1 ; i<= n1 ; i++) { 
                        cout << mp[a[i]] <<' ' ;  
                   } 
                    cout << token ;   
                   cout << endl ;
              } 
              else Try(i+1) ;  
              u[j] = 0 ; 
          }
     }
}
int main() { 
      cin >> n;  
      set<string> se;  
      vector<string> v ;
      for(int i=0 ; i< n ; i++) { 
          string s ; 
          cin >> s;  
          se.insert(s) ; 
      } 
      cin >> token ;  
      for(auto it : se) { 
          if( it != token) { 
             v.push_back(it) ; 
          }
      }  
      n1 = v.size() ; 
     mp[0] ='0' ; 
     int cnt = 1; 
     for(int i=0 ; i< v.size() ; i++) { 
         mp[cnt] = v[i] ; 
         ++cnt ; 
     } 
      Try(1) ; 
}