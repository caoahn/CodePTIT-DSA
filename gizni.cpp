#include<bits/stdc++.h> 
using namespace std ;  
int n,t,x[100],cot[1000],d1[1000],d2[1000] ; 
int cnt = 0 ;   
int a[100][100] ; 
void in() { 
   memset(a,0,sizeof(a)) ; 
   for(int i=1 ; i<= n ; i++) { 
      a[i][x[i]] = 1; 
   } 
   for(int i=1 ; i<= n ;i++) { 
     for(int j=1;j<= n ;j++) { 
        cout << a[i][j] ; 
	 } 
	 cout << endl ; 
   } 
   cout << endl ; 
}  

void Try(int i) { 
   for(int j=1 ; j<= n ; j++) { 
        if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) { 
            x[i] = j ; 
			cot[j] = 0, d1[i-j+n]=0, d2[i+j-1] = 0 ;  
            if(i == n) { 
              ++cnt ; 
			} 
			else { 
			  Try(i+1) ; 
			} 
			cot[j] = 1, d1[i-j+n]=1, d2[i+j-1] = 1 ; 
		}
   }   
}
int main() {  
 cin >> t  ; 
   while(t--) { 
      cin >> n ;  
      for(int i=1 ; i<= 999 ; i++) { 
      cot[i]= d1[i]=d2[i] = 1; 
    }
   Try(1) ;  
   cout << cnt << endl ; 
   cnt = 0 ; 
   }
return 0 ; 
}