#include<bits/stdc++.h> 
using namespace std ; 
int n ; 
int a[1001] ;    
int x[1001] ; 
int ok ; 
map<int,int> mp ; 
void ktao() { 
   for(int i=1 ;i<= n ; i++) { 
      x[i] = i ; 
   }
}
void sinh() { 
     int i= n - 1; 
      while(i >= 0 && x[i] > x[i+1]) { 
          --i ; 
	  }
	  if(i == 0) { 
	    ok = 0 ; 
	  } 
	  else { 
	    int j = n ; 
	    while(x[i] > x[j] ) --j ; 
	    swap(x[j],x[i]) ; 
	    int l = i+1 ; 
	    int r=n ; 
	    while(l <= r) { 
	      swap(x[l],x[r]) ; 
	      ++l ; 
	      --r ; 
		}
	  }
}
int main() { 
   cin >> n ; 
   for(int i=0; i < n ; i++) { 
      cin >> a[i] ; 
   }   
   sort(a,a+n) ; 
   int cnt = 1 ; 
   mp[0] = 0 ; 
   for(int i=0; i < n ; i++) { 
     mp[cnt] = a[i] ; 
     ++cnt ; 
   } 
   ktao() ; 
   ok = 1 ; 
   while(ok) { 
      for(int i=1 ; i<= n ; i++) { 
        cout << mp[x[i]] <<" " ; 
	  }  
	  cout << endl ; 
	  sinh() ; 
   }
}
