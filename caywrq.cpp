#include<bits/stdc++.h> 
using namespace std ; 
struct Node { 
   int c ; 
   Node *l ; 
   Node *r ; 
}; 
typedef struct Node* tree ; 
tree makeNode(int x) { 
   tree tmp = new Node;  
   tmp->c = x ; 
   tmp->l = NULL; 
   tmp->r = NULL; 
   return tmp ; 
} 
void build(tree &t,int pa,int ci,char c) { 
    if(t != NULL) { 
        if(t->c == pa) { 
             if(c == 'L') { 
                t->l = makeNode(ci) ; 
			 } 
			 else t->r = makeNode(ci) ; 
		} 
		build(t->l,pa,ci,c) ; 
		build(t->r,pa,ci,c) ;  
	}
} 
void solve(tree t) { 
   queue<tree> q ; 
   q.push(t) ; 
   tree top ; 
   while(q.size()) { 
      top = q.front() ; 
      cout << top->c << " " ; 
      q.pop() ; 
      if(top->l != NULL) { 
         q.push(top->l) ; 
	  } 
	  if(top->r != NULL) { 
	     q.push(top->r) ; 
	  }
   }
}
int main() { 
    int t ; 
    cin >> t; 
    while(t--) {  
        tree head = NULL ; 
        int n ; 
        cin >> n ; 
        int pa,ci ; 
        char c ; 
        cin >> pa >> ci >> c ;  
        head = makeNode(pa) ;      
		build(head,pa,ci,c) ; 
		--n ; 
		while(n--) { 
		    cin >> pa >> ci >> c ; 
		    build(head,pa,ci,c) ; 
		}  
		solve(head) ; 
		cout << endl ;    
	}
}
