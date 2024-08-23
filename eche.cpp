#include<bits/stdc++.h> 
using namespace std; 
int main() { 
   int n ,q ; 
   cin >> n  >> q;  
   int a[n]  ; 
   for(int &x : a) { 
       cin >> x ; 
   } 
   int res[n] ; 
   res[n-1] = -1 ; 
   stack<int> st ;
   st.push(n-1) ; 
   for(int i=n-2 ; i>=0; i--) { 
         if(st.size() and a[i] < a[st.top()]) { 
              res[i] = st.top() ; 
              st.push(i) ; 
		 } 
		 else { 
		   while(st.size() and a[i] >= a[st.top()]) st.pop() ;  
		   if(st.size()) res[i] = st.top() ; 
		   else res[i] = -1 ;  
		   st.push(i) ; 
		 }
   } 
   while(q--) { 
      int x ;
      cin >>x ;
      --x ; 
      int cnt = 0 ; 
      while(x!=-1) { 
          x=res[x] ; 
          ++cnt ; 
	  }
	  cout << cnt-1 << endl ; 
   }
}
