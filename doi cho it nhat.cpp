#include<bits/stdc++.h> 
using namespace std ; 
int main() { 
    int t ; 
    cin >>t ; 
    while(t--) { 
       int n ; 
       cin >> n ; 
       int a[n]  ; 
       for(int &x : a) cin >>x ; 
       int cnt = 0 ; 
       for(int i=0 ; i < n-1 ; i++)  { 
         int min = i ;  
         for(int j=i+1 ; j < n ; j++) { 
            if(a[j] < a[min]) { 
                min = j ; 
			}
		 } 
		 if(a[min] < a[i]) { 
		   ++cnt ; 
		   swap(a[min],a[i]) ; 
		 }
	   }
       cout << cnt << endl ; 
	}  
	return 0 ; 
}
