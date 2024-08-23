#include<bits/stdc++.h> 
using namespace std ;
int main()  { 
      int t  ; 
      cin >> t; 
      while(t--) { 
           long long n ; 
           cin >> n;  
           queue<string> q ; 
           string s = "1" ; 
           q.push(s) ; 
           while(1) { 
               string x = q.front() ; 
               q.pop() ; 
               long long tmp = stoll(x) ; 
               if(tmp % n == 0) { 
                  cout << tmp << endl ; 
                  break ; 
               } 
               q.push(x + "0") ; 
               q.push(x + "1") ; 
           } 
      }
}