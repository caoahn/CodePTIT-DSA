#include<bits/stdc++.h> 
using namespace std ;  
int a[100] ; 
string s="" ; 
char a1 ; 
int n ;  
int ok ; 
map<int,char> mp ; 
string res="" ;  
vector<string> v ; 
bool kt(int x) { 
  if (x == 1 || x == 5) return true  ; 
  return false ; 
}
bool check2(int a[],int n) { 
   for(int i=0; i < n ; i++) { 
     if(kt(a[i])) { 
         if( i == 0  || i == n-1) continue ; 
         if(!kt(a[i-1]) && !kt(a[i+1])) return false ; 
	 }
   } 
   return true ; 
} 
void sinh() { 
    int i = n-1 ; 
    while( i >= 0 && a[i] > a[i+1]) {  
       --i ; 
	} 
	if(i < 0) { 
	   ok = 0 ; 
	} 
	else { 
	   int j= n - 1; 
	   while(a[i] > a[j]) --j ; 
	   swap(a[i],a[j]) ; 
	   int l=i+1 ; 
	   int r = n-1 ; 
	   while(l<r) { 
	      swap(a[l],a[r]) ; 
	      ++l ; 
	      --r; 
	   }
	}
}
int main() {   
    ok = 1 ;  
    cin >> a1; 
   for(char z='A'; z <= a1 ; z++  ) { 
     s += z ; 
   }  
    n = s.size() ; 
    ok=1 ;  
   for(int i=0; i < n ; i++) { 
     a[i] = i+1 ; 
   }
   for(int i=0;i< n; i++) { 
     mp[a[i]] = s[i] ; 
   }  
   while(ok) {  
     if(check2(a,n)) { 
         for(int i=0; i < n ; i++) { 
            res += mp[a[i]] ; 
	 } 
	 v.push_back(res) ; 
   }  
     res ="" ; 
	 sinh() ; 
   } 
   sort(v.begin(),v.end()) ; 
   for(auto x : v) { 
     cout << x << endl ; 
   } 
} 
