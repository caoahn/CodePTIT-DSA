#include<bits/stdc++.h>
using namespace std ; 
struct job { 
     int stt ; 
     int dl ; 
     int pf ; 
} ; 
bool cmp(job x,job y) { 
    return x.pf > y.pf; 
}  
int main() { 
     int t; 
     cin >> t ;
     while(t--) { 
        int n ; 
        cin >> n ; 
        job a[n] ; 
        for(int i=0; i < n ; i++) { 
           cin >> a[i].stt >> a[i].dl >> a[i].pf  ; 
        } 
        sort(a,a+n,cmp) ; 
        int sum = 0 ; 
        int cnt = 0 ; 
        int use[1001] = {0} ; 
        for(int i=0; i < n ; i++) { 
           while(use[a[i].dl] == 1 && a[i].dl > 0) { 
              a[i].dl -= 1 ; 
           } 
           if(use[a[i].dl] == 0 && a[i].dl > 0) { 
              use[a[i].dl] = 1 ; 
              sum += a[i].pf ; 
              ++cnt ; 
           }
        } 
        cout << cnt <<' ' << sum << endl ; 
     } 
     return 0 ; 
}
