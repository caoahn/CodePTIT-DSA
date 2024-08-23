#include<bits/stdc++.h> 
using namespace std ; 
int n,a[100],ok ; 
void ktao() { 
  for(int i=1 ; i<= n ;i++) { 
     a[i] = 0 ; 
  }
} 
void sinh() { 
   	int i=n ; 
   	while(i >= 1 && a[i] == 1) { 
   	    a[i] = 0 ; 
   	    --i ; 
  } 
  if(i == 0) { 
     ok = 0 ; 
  } 
  else { 
     a[i] = 1 ; 
  }
} 
bool check() { 
   if(n <6) return false; 
   return true ; 
} 
bool check4() { 
   if(a[1] == 0 && a[n] == 1) return true ;  
   return false ; 
}
bool check2() { 
   for(int i=1 ; i<= n-1 ; i++) { 
     if(a[i]==0 && a[i+1]==0) { 
        return false ; 
	 }
   } 
   return true ; 
} 
bool check3() { 
  for(int i=1 ;i<= n-3; i++) { 
     if(a[i]==1 && a[i+1]==1 && a[i+2] == 1 && a[i+3] == 1) { 
        return false ; 
	 }
  } 
  return true ; 
}
int main() {  
   cin >> n ; 
   ok= 1;  
  ktao() ; 
  string s ="" ; 
  vector<string> v ; 
  while(ok == 1) {   
  if(check() && check2() && check3() && check4()) { 
         for(int i=1 ; i<=n;i++) { 
     if(a[i] == 1) s+= "6" ; 
	   else s+="8";    
	}  
	v.push_back(s) ; 
	s="" ; 
  }
	sinh() ; 
  } 
  sort(v.begin(),v.end()) ; 
  for(auto x : v) { 
      cout << x << endl ; 
  }
}
