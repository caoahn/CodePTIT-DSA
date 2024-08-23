#include<bits/stdc++.h> 
using namespace std ; 
struct node { 
     int c; 
     node *l ; 
     node *r ; 
}; 
typedef node* tree; 
tree makenode(int x) { 
   tree tmp = new node ; 
   tmp->c = x ; 
   tmp->l = NULL ; 
   tmp->r = NULL ; 
   return tmp ; 
} 
void build(tree &t,int x)  { 
   if(t == NULL) { 
         t = makenode(x) ;  
         return ; 
   } 
   else { 
      if(t->c > x) { 
         build(t->l,x) ; 
	  } 
	  else build(t->r,x) ; 
   }
} 
void in(tree T) { 
       if(T -> l)
        in(T -> l);
    if(T -> r)
        in(T -> r);
    cout << T -> c << ' ';
}
int main() { 
   int t ;
   cin >> t; 
   while(t--) { 
      int n ; 
      cin >> n ;  
      tree head = NULL ; 
      while(n--) { 
         	int x ;  
         	cin >> x ; 
         	build(head,x) ; 
	  } 
	  in(head) ; 
	  cout << endl ; 
   }
}
