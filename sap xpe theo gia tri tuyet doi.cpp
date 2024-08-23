#include<bits/stdc++.h> 
using namespace std ; 
struct so { 
   int a,b,c; 
};  
bool cmp(so x,so y) { 
    if(x.b < y.b) return true ; 
    if(x.c < y.c && x.b == y.b) return true ; 
    return false;  
}
int main() { 
  int t ; 
  cin >> t ; 
  while(t--) {  
     int n,x ; 
     cin >> n >> x ; 
     struct so s[n] ; 
     for(int i=0 ; i < n ; i++) { 
       cin >> s[i].a ; 
       s[i].b = abs(x - s[i].a) ; 
       s[i].c = i ; 
	 } 
	 sort(s,s+n,cmp) ; 
	 for(int i=0; i < n ; i++) { 
	   cout << s[i].a <<" " ; 
	 } 
	 cout << endl ; 
  }
}
