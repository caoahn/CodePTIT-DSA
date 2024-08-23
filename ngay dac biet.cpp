#include<bits/stdc++.h> 
using namespace std ;  
vector<string> v; 
string s ; 
int x[1005] ;  
string res="" ; 
void Try(int i) { 
  for(int j=0 ; j <= 2 ; j++) {  
     if(j == 0 || j == 2) { 
        x[i] = j ; 
        if(i == 8) {  
             for(int k=1 ; k <= 8 ; k++) { 
               res += to_string(x[k]) ; 
			 }  
		// 20 02 2002 
			 if ((res[0] != '0' || res[1] != '0') && (res[2] == '0' && res[3] != '0') && res[4] == '2') { 
			    res.insert(2,"/") ; 
			    res.insert(5,"/") ;  
			    v.push_back(res) ;  
			 } 
			 res ="" ;   
		} 
		else { 
		  Try(i+1)  ; 
		}
	 }
  }
}
int main() {  
    Try(1) ;  
    sort(v.begin(),v.end()) ; 
    for(int i=0 ; i< v.size() ; i++) { 
      cout << v[i] << endl ; 
	} 
	return 0  ; 
}
