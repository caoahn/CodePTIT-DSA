#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
   int t; 
   cin >> t ; 
   while(t--) { 
      int n1,n2,n3 ; 
      cin >> n1 >> n2 >> n3 ; 
      map<long long,long long> mp;
	  map<long long,long long> mp1,mp2,mp3;
      for(int i=0 ; i < n1  ; i++) { 
         long long x ; 
		 cin >> x ; 
		 mp[x]= 1 ;  
		 mp1[x]++ ; 
	  } 
	   for(int i=0 ; i < n2  ; i++) { 
        long long x ; 
        cin >> x ; 
         if(mp[x] == 1) { 
           mp[x] = 2; 
		 } 
		 mp2[x]++ ; 
	  } 
	   for(int i=0 ; i < n3  ; i++) { 
         long long x; 
		 cin >> x ;   
         if(mp[x] == 2) { 
           mp[x] = 3 ; 
		 } 
		 mp3[x++] ; 
	  }    
	  int ok = 0 ;
     for(auto x : mp) { 
      if(x.second == 3) { 
	    ok = 1 ;  
       for (int i = 0; i < min({mp1[x.first], mp2[x.first], mp3[x.first]}); i++)
                {
                    cout << x.first << " ";
         }
	  } 
   } 
   if(ok == 0) cout <<"-1"  ;  
   cout << endl ; 
   }
}                         
