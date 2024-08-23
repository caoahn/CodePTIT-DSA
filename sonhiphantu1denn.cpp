#include<bits/stdc++.h> 
using namespace std ;
int main() { 
        int t ;
        cin >> t ; 
        while(t--) { 
              int n ; 
              cin >> n ; 
              queue<string> q ; 
              int cnt = 0 ; 
              string s = "1" ;  
              q.push(s) ;  
              while(1) { 
                   string x  = q.front() ; 
                   q.pop() ; 
                   if(cnt == n) break ; 
                   cout << x << ' ' ; 
                   q.push(x + "0") ; 
                   q.push(x + "1") ;  
                   ++cnt ;  
              } 
              cout << endl ; 
        }
}