#include<bits/stdc++.h> 
using namespace std ; 
char c ; 
int k ;  
int n ; 
map<int,char> mp ; 
vector<string> v ;   
void Try(int i,int dem,string res) { 
   if(dem > k) return ;  
   if(dem == k) { 
      v.push_back(res) ; 
      res = "" ; 
      return ; 
   } 
   for(int j=i; j <= n ; j++) { 
	  Try(j,dem + 1 , res + mp[j]) ; 
   }
}
 int main() { 
    string s = "" ;  
   cin >> c  ; 
   cin >> k ;
   for(char i = 'A' ; i <= c  ; i++) { 
      s += i ; 
   }   
   n = s.size() ; 
   int cnt = 1 ; 
   mp[0] = '0' ;  
   for(int i=0; i < s.size() ; i++) { 
      mp[cnt] = s[i] ; 
      ++cnt ; 
   } 
   Try(1,0,"") ;  
   for(auto x : v) { 
     cout << x << endl ; 
   }
}
