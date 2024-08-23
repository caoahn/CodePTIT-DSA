#include<bits/stdc++.h> 
using namespace std; 
void thap(int n,char a,char b,char c) { 
    if(n == 1) { 
      cout <<a<<" -> " <<c << endl; 
	} 
	else { 
	   thap(n-1,a,c,b) ; 
	   thap(1,a,b,c) ; 
	   thap(n-1,b,a,c) ; 
	}
} 
int main() { 
   int n ; 
   cin >> n ; 
   char a='A', b = 'B', c='C' ; 
   thap(n,a,b,c) ; 
}
