#include<bits/stdc++.h> 
using namespace std ; 
int n,k,a[1001],ok ; 
vector<string> v ; 
string res ;   
void ktao() { 
    for(int i=1 ; i<= k ; i++) { 
       a[i] = i ; 
    }
} 
void sinh() { 
    int i=k; 
    while(i >= 1 && a[i] == n-k+i)  { 
        --i ; 
    }
    if(i == 0) { 
       ok = 0; 
    } 
    else { 
       ++a[i] ; 
       for(int j=i+1 ; j<=k ; j++) { 
           a[j] = a[j-1] + 1 ; 
       }
    }
}
int main() { 
     cin >> n >> k ; 
     ok =1  ;
     ktao() ; 
     while(ok)  { 
         for(int i=1 ; i<= k ; i++) { 
           res += to_string(a[i]) ; 
         }  
         v.push_back(res) ; 
         res ="" ; 
         sinh() ; 
     } 
        for(int i=v.size()-1 ; i>=0 ; i--) { 
             cout << v[i] << endl ; 
        } 
        return 0 ; 
}