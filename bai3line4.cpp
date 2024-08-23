#include<bits/stdc++.h> 
using namespace std ; 
long long find_max(long long a[],long long n,long long m) { 
       stack<long long> st ;
       long long res = 0 , i = 0 ; 
       while(i < m) { 
           if(st.empty() || a[st.top()] <= a[i]) st.push(i++) ;  
           else { 
              long long x = st.top() ; 
              st.pop() ; 
              if(st.empty()) res = max(res,i*a[x]) ; 
              else { 
                 res = max(res,a[x]*(i-st.top() -1 )) ; 
			  }
		   }
	   } 
	   while(!st.empty()) { 
	      long long x = st.top() ; 
	      st.pop() ; 
	      if(st.empty()) res = max(res,i * a[x]) ; 
	      else { 
	         res = max(res, a[x]*(i-st.top() - 1 )) ; 
		  }
	   }
	   return res ; 
}
int main() { 
     int n,m ; 
     cin >> n >> m ; 
     long long a[m+5] , b[m+5] ; 
     for(int i=0 ; i < m ; i++) { 
          cin >> a[i] ; 
          b[i] = n - a[i] ; 
	 } 
	 cout << max(find_max(a,n,m),find_max(b,n,m)) << endl ; 
}
