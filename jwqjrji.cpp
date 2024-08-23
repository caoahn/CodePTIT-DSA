#include<bits/stdc++.h> 
using namespace std; 
struct Node { 
   int c ; 
   Node *l ; 
   Node *r ; 
};  
typedef Node* tree ; 
tree makeNode(int u) { 
    tree res = new Node ; 
    res->c = u ; 
    res->l = NULL ; 
    res->r = NULL ; 
} 
void build(tree &t,int x) { 
    if(t == NULL) { 
      t = makeNode(x) ; 
	} 
	else { 
	  if(t->c > x) { 
	     build(t->l,x) ; 
	  } 
	  else build(t->r,x) ; 
	}
} 
void in(tree t) { 
   cout << t->c << " " ; 
   if(t->l != NULL) { 
      in(t->l) ; 
   } 
   if(t->r != NULL) { 
     in(t->r) ; 
   }
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
