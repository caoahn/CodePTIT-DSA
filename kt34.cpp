#include<bits/stdc++.h>  
using namespace std ;
int n ; 
int k ; 
char c;
int a[100] ; 
map<int,char> mp ;  
vector<string> v ; 
string res =""; 
void Try(int i,int z,string res) { 
      if(z > k) { 
         return ; 
      }   
       if(z == k) { 
         v.push_back(res) ; 
         return ;  
       } 
       for(int j=i ; j <= n ; j++) { 
         Try(j,z+1,res + mp[j]) ; 
       }
}
    
int main() { 
    char c ; 
     cin >> c; 
     cin >> k ; 
     string s = "" ;  
     for(char i = 'A' ; i <= c ; i++) { 
         s+= i ; 
     } 
     mp[0] ='0' ; 
      n = s.size() ; 
     int cnt = 1 ;  
     for(int i=0 ; i < s.size() ; i++) { 
         mp[cnt] = s[i] ; 
         ++cnt ; 
     } 
     v.clear() ; 
    Try(1,0,"") ; 
     sort(v.begin(),v.end()) ; 
     for(auto it : v) { 
         cout << it << endl ; 
     }
}