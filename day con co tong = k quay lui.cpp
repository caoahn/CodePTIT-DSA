#include<bits/stdc++.h> 
using namespace std ;  
int n,k,a[1000],b[1000],t ;   
vector<string> v ; 
string s ="" ; 
bool check() { 
  int s = 0 ; 
  for(int i=1 ; i<= n ; i++) { 
    if(a[i]) { 
       s += b[i] ; 
	}
  } 
  return s == k ;  
} 
void Try (int i) { 
    for(int j=0 ; j<= 1 ;j++) { 
       a[i] = j ; 
       if(i == n) { 
          if(check()) { 
            for(int i=1 ; i<= n ;i++) { 
              if(a[i]) { 
                  s += to_string(b[i]) ; 
                  s+= " " ; 
			  }
			}
			s.pop_back() ;  
			string w = "[" + s + "]" ; 
			v.push_back(w) ; 
			s ="" ; 
		  }
	   } 
	   else { 
	     Try(i+1) ; 
	   }
	}
}
int main() { 
   cin >> t; 
   while(t--) { 
      cin >> n >> k ;
      for(int i=1 ; i<= n ; i++) { 
        cin >> b[i] ; 
	  } 
	  sort(b+1,b+n+1) ;  
	  Try(1) ;  
	  int n1= v.size() ;  
	  if(n1 == 0) { 
	    cout <<"-1"  ; 
	  } 
	  else {  
	  for(int i=n1-1;i>=0;i--) { 
	    cout << v[i] <<" " ; 
	  }  
	  v.clear() ; 
	  }
	  cout << endl ; 
   }
}
