#include<bits/stdC++.h> 
using namespace std ; 
int chon(int a[],int l,int h) { 
      int p= a[h] ; 
      int i=l-1 ; 
      for(int j=l ; j <= h-1 ; j++) { 
          if(a[j] < p) {  
             ++i ; 
             swap(a[i],a[j]) ; 
          }
      } 
      swap(a[i+1],a[h]) ; 
      return (i+1); 
} 
void quicksort(int a[],int l,int h) { 
      if(l < h) { 
          int pi = chon(a,l,h) ;  
          quicksort(a,l,pi-1) ; 
          quicksort(a,pi+1,h) ; 
      } 
} 
int main() { 
      int n ; 
      cin >>  n ; 
      int a[n] ; 
      for(int &x : a) { 
          cin >> x;  
      } 
      quicksort(a,0,n-1) ;  
       for(int i=0; i<n ; i++) { 
          cout << a[i] <<' ' ; 
       } 
       return 0 ; 
} 