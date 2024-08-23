#include<bits/stdc++.h> 
using namespace std ; 
struct Node {  
   int c ;  
   Node *l ; 
   Node *r ; 
}; 
typedef Node* tree ; 
int nt(int n) { 
  for(int i=2 ; i <= sqrt(n) ; i++) {  
      if(n % i == 0) { 
        return  0 ; 
	  }
  } 
    return n > 1 ; 
}
tree makeNode(int x) { 
      tree res = new Node ; 
	  res-> c = x ;  
	  res->l = NULL ; 
	  res->r = NULL ; 
	  return res ;  
} 
 
void them(tree &t, int x) { 
     if(t  == NULL) { 
           t = makeNode(x) ; 
	 } 
	 else { 
	     if(t->c > x) { 
	            them(t->l,x) ; 
		 } 
		 else if(t->c < x) { 
		        them(t->r,x) ; 
		 }
	 }
} 
void duyetNLR(tree t) { 
   if(t != NULL) { 
      cout << t->c << ' ' ; 
      duyetNLR(t->l) ; 
      duyetNLR(t->r) ; 
   }
}

void demnt(tree t,int &dem) { 
    if(t != NULL) { 
        if(nt(t->c)) { 
           ++dem ; 
		} 
		demnt(t->l,dem) ; 
		demnt(t->r,dem) ; 
	} 
} 
Node* TimKiem(tree t,int x) { 
     if(t== NULL) { 
          return NULL ; 
	 } 
	 else if(x < t->c) { 
	    TimKiem(t->l,x) ; 
	 } 
	 else if(x > t->c) { 
	   TimKiem(t->r,x) ; 
	 } 
	 else { 
	   return t ; 
	 }
} 
void node2la(tree t) { 
     if(t != NULL) { 
	      if((t->l != NULL) && (t->r != NULL)) { 
	          cout << t->c <<" "; 
		  } 
          node2la(t->l) ; 
          node2la(t-> r) ; 
	 }
} 

int main() { 
     tree head = NULL ; 
     while(1) { 
    cout <<"----------------MENU---------------" << endl ; 
    cout << "1.nhapdulieu" << endl ; 
    cout << "2.xuatdulieu" << endl ;  
    cout << "3.kethuc" << endl ;   
    cout <<"4. DEM SO LUONG SO NT TRONG TREE" << endl ;  
    cout <<"5.Tim kiem ptu trong tree" << endl ;  
    cout <<"6.Xac dinh node 2 la" << endl ; 
    int lc ; 
    cin >> lc ;  
    if(lc == 1) { 
        int x ; 
        cin >> x ; 
        them(head,x) ; 
	} 
	else if(lc == 2) { 
	    duyetNLR(head) ; 
	} 
	else if(lc == 3) { 
	  break ; 
	} 
	else if(lc == 4) {  
	    int dem = 0 ; 
	    demnt(head,dem) ; 
		cout << dem << endl;  
	} 
	else if(lc == 6) { 
		 node2la(head) ;  
	}
	else if(lc == 5) { 
	     int x ; 
	     cin >>x ;  
	     Node *p = TimKiem(head,x) ;  
	     if(p == NULL) { 
	       cout <<"NO VALID" <<endl ; 
		 } 
		 else cout <<"ton ttai nhe" << endl ; 
	} 
	 }
}
