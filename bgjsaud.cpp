#include<bits/stdc++.h> 
using namespace std ; 
int a[1001] ;  
vector<string> v ; 
void Try(int i) { 
   for(int j=0 ; j<= 2 ; j++) { 
     if(j == 0 || j == 2) { 
          a[i] = j ; 
		  if(i == 8) { 
		      string s = "" ; 
			  for(int k=1 ; k<= 8 ; k++) { 
			    s+= to_string(a[k]) ; 
			  } 
			 if( (s[0] != '0' || s[1] != '0') && (s[2] == '0' && s[3] == '2') && (s[4] == '2')) { 
			      s.insert(2,"/")  ; 
			      s.insert(5,"/") ; 
			      v.push_back(s) ; 
			 }  
		  } 
		  else Try(i+1) ;     
	 }
   }
}
int main() { 
    Try(1) ; 
    sort(v.begin(),v.end()) ; 
    for(auto it : v) { 
         cout << it << endl ; 
	}
}
