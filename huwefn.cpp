#include<bits/stdc++.h> 
using namespace std ;
struct cv { 
    int s, p ; 
    float w ; 
};  
bool cmp(cv x, cv y) { 
   if(x.w < y.w) return true ; 
   else if(x.w == y.w && x.s < y.s) return true ; 
   return false;  
}
int main() { 
   int n ; 
   cin >> n ; 
   struct cv a[101] ; 
   for(int i=0; i < n ; i++) { 
     cin >> a[i].s >> a[i].p ; 
	  a[i].w = (float) a[i].p / a[i].s  ; 
   } 
   sort(a,a+n,cmp) ;  
    int cnt = 0 ; 
    stack<cv> st; 
    for(int i=0; i < n ; i++) {  
       st.push(a[i]) ; 
	} 
	int tmp = n ; 
	while(!st.empty()) { 
	    if(tmp == 0 || tmp < 0 ) break ;   
	   cv ed = st.top() ; 
	   st.pop() ; 
	   cnt += ed.p ;  
	   tmp -= ed.s ; 
	} 
	cout << cnt << endl ; 
}
