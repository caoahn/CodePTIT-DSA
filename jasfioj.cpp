#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	Node(int x){
		data = x;
		left = right = NULL;
	}
};

void insertNode(Node *root, int x){
	if(root == NULL) root = new Node(x);
	else{
		if(x < root->data) insertNode(root->left, x);
		else insertNode(root->right, x);
	}
//	cout << root->data << " ";
}

void postOrder(Node *root){
	if(root == NULL) return;
//	cout << root->data << " ";
	if(root->left) postOrder(root->left);
	if(root->right) postOrder(root->right);
	cout << root->data << " ";
}

void test(){
	int n;
	cin >> n;
	Node *root = NULL;
	while(n--){
		int x;
		cin >> x;
		insertNode(root, x);
	}
	postOrder(root);
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		test();
	}
	return 0;
}
