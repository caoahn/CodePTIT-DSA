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
      duyetNLR(t->l) ; 
       cout << t->c << ' ' ; 
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
	          cout << t->c <<" " ; 
		  } 
          node2la(t->l) ; 
          node2la(t-> r) ; 
	 }
}
void node1la(tree t) { 
     if(t != NULL) { 
	      if((t->l != NULL) && (t->r == NULL) ||  (t->l == NULL) && (t->r != NULL) ) { 
	          cout << t->c <<" " ; 
		  } 
          node1la(t->l) ; 
          node1la(t-> r) ; 
	 }
}
void nodela(tree t) { 
     if(t != NULL) { 
	      if((t->l == NULL) && (t->r == NULL)) { 
	          cout << t->c <<" " ; 
		  } 
          nodela(t->l) ; 
          nodela(t-> r) ; 
	 }
} 
int res = INT_MIN ; 
int timmax2(tree t) { 
//   if(t->r != NULL) { 
//       int right = timmax2(t->r) ; 
//       if(res < right) { 
//            res = right ;  
//	   }
//   }  
   if( t->r == NULL) { 
      return t->c ; 
   }
   return timmax2(t->r) ; 
} 
void nodethemang(tree &x,tree &y) { 
    if(y->l != NULL) { 
          nodethemang(x,y->l) ; 
	} 
	else { 
	     x->c = y->c ; 
	     x = y ; 
	     y = y->r ; 
	}
} 
void delet(tree &t,int x) { 
   if(t == NULL) { 
       return  ; 
   } 
   else { 
        if(x < t->c) { 
           delet(t->l,x) ; 
		} 
		else if(x > t->c) { 
		   delet(t->r,x) ; 
		} 
		else { 
		  Node *p= t ; 
		  if(t->l == NULL) { 
		      t = t->r ; 
		  } 
		  else if(t->r == NULL) { 
		      t = t->l ; 
		  } 
		  else { 
		     nodethemang(p,t->r) ; 
		  } 
		  delete p ;
		}
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
    cout <<"7.Xac dinh node 1 la" << endl ; 
    cout <<"8.Xac dinh node la" << endl ;  
    cout <<"9.Tim max trong node" << endl ;  
    cout <<"10.xoan node co gia tri = x " << endl ; 
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
	else if(lc == 7) { 
		 node1la(head) ;  
	}
	else if(lc == 8) { 
		 nodela(head) ;  
	}  
	else if(lc == 9) { 
	   cout << timmax2(head) << endl  ; 
	} 
	else if(lc == 10) { 	
	   int x ; 
	   cin >> x ; 
	   delet(head,x) ; 
	}
	 }
}
