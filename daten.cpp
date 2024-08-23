#include<bits/stdc++.h>
using namespace std ; 
char x ; 
int  k ; 
int n ; 
map<int,char> mp ; 
vector<string> v ;  
void Try(int i,int pos,string res) { 
       if(pos > k) { 
         return ; 
       } 
       if(pos == k) { 
        v.push_back(res) ; 
       } 
       for(int j=i ; j <= n ; j++) { 
           Try(j,pos+1,res + mp[j]) ; 
       }
}
int main() { 
      cin >> x >> k ; 
      string s ="" ; 
      for(char i = 'A' ; i<=x ; i++) { 
         s+=i ; 
      }   
      n = s.size() ; 
      mp[0] = '0' ; 
      int cnt= 1 ; 
      for(int i=0; i < s.size() ; i++) { 
          mp[cnt] = s[i] ; 
          ++cnt ; 
      } 
      Try(1,0,"") ; 
      sort(v.begin(),v.end()) ; 
      for(auto x : v) { 
         cout << x << endl ;
      }
}