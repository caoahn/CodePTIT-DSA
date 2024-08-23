#include<bits/stdc++.h> 
using namespace std ; 
char a[1000] ; 
char c ; 
int  k ; 
void Try(int i,char h) { 
   for(char j= h ; j <= c  ; j++) { 
      a[i] = j ; 
       if(i == k) { 
         for(int z=1 ; z<= k ; z++) { 
            cout << a[z] ; 
		 } 
		 cout << endl ; 
	   } 
	   else { 
	     Try(i+1,j) ; 
	   }
   }
} 
int main() { 
    cin >> c >> k ; 
    Try(1,'A') ;  
    return 0 ; 
}
