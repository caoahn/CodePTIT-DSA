#include<bits/stdc++.h> 
using namespace std; 
char x,y ;  
int a[1001] ;  
int n ;  
int ok ; 
void ktao() { 
   for(int i = 1; i<= n ; i++) { 
      a[i] = i ; 
   }
} 
void sinh() { 
   int i=n-1 ; 
   while(i >= 1 && a[i] > a[i+1]) { 
       --i ; 
   } 
   if(i == 0) { 
       ok = 0 ; 
   } 
   else { 
     int j= n ; 
     while(a[i] > a[j]) --j ; 
     swap(a[i],a[j]) ; 
     int l = i + 1 ; 
     int r = n ; 
     while(l <= r) { 
       swap(a[l],a[r]) ; 
       ++l ; 
       --r ; 
	 }
   }
}
int main() { 
   cin >> x >> y ;   
   map<int,char> mp ;  
   mp[0] = '0' ; 
   int cnt = 1 ; 
   string s ="" ;  
   if(x < y) { 
     for(char i=x ; i<=y; i++) { 
         s += i ; 
     }    
   } 
   else { 
        for(char i=y ; i<=x; i++) { 
            s += i ; 
         } 
   } 
   for(int i=0; i < s.size() ; i++) { 
      mp[cnt] = s[i] ; 
      ++cnt ; 
   }  
   n = s.size() ;  
   ok = 1 ;
   ktao() ; 
   while(ok) { 
       for(int i=1 ; i<= n ; i++) { 
          cout << mp[a[i]]; 
	   } 
	   cout << endl ; 
	   sinh() ; 
   } 
}
