#include<bits/stdc++.h>
using namespace std;



class treeNode {
public:
	int val;
	treeNode* left;
	treeNode* right;

	treeNode(int data) {
		val = data;
		left = NULL;
		right = NULL;
	}
};

treeNode* builtTree(treeNode* root) {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}
	if (root == NULL) {
		root = new treeNode(data);
	}

	root->left =  builtTree(root->left); // will return me the address of my leftchild node
	root->right =  builtTree(root->right); // will return me the adress of rightchild node

	return root;
}


void preOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}

	cout << root->val << " ";
	preOrder(root->left);
	preOrder(root->right);


}

void inOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}

	preOrder(root->left);
	cout << root->val << " ";

	preOrder(root->right);


}

void postOrder(treeNode* root) {
	if (root == NULL) {
		return;
	}

	preOrder(root->left);

	preOrder(root->right);
	cout << root->val << " ";


}

int countNodes(treeNode* root) {
	if (root == NULL) {
		return 0;
	}

	int leftcount = countNodes(root->left);
	int rightcount = countNodes(root->right);
	int totalcount = leftcount + rightcount + 1;
	return totalcount;
}

int sumNodes(treeNode* root) {
	if (root == NULL) {
		return 0;
	}
	int leftsum = sumNodes(root->left);
	int rightsum = sumNodes(root->right);
	int totalsum = leftsum + rightsum + root->val;
	return totalsum;
}

bool searchNode(treeNode* root, int key) {
	if (root == NULL) {
		return false;
	}


	if (root->val == key) {
		return 1;
	}
	bool leftsearch = searchNode(root->left, key);
	bool rightsearch = searchNode(root->right, key);
	return leftsearch or rightsearch;

}




int height(treeNode* root) {
	if (root == NULL) {
		return -1;
	}

	int leftheight = height(root->left);

	int rightheight = height(root->right);
	int totalheight = max( leftheight , rightheight) + 1;
	return totalheight;
}

int maxDistance(treeNode* root) {
	if (root == NULL) {
		return 0;
	}
	int leftdiameter = maxDistance(root->left);
	int rightdiameter = maxDistance(root->right);

	int leftheight = height(root->left);
	int rightheight = height(root->right);

	int mydiameter = leftheight + 2 + rightheight;
	//int totalheight = leftheight + rightheight + 1;
	return max(mydiameter, max(leftdiameter, rightdiameter));
}



treeNode* builtBST(treeNode* root, int data){
	if(root==NULL){
		root= new treeNode(data);
		return root; 
	}
	if(data>root->val){
		root->right=builtBST(root->right,data);

	}else{
		root->left=builtBST(root->right,data);
	}
	return root;

}


treeNode* insert(treeNode* root){
	int data;
	cin>>data;

	while(data!=-1){
		root=builtBST(root,data);
		cin>>data;
	}
return root;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
//////////////////////////////





	treeNode* root = NULL;
	root = insert(root);

	

	//cout << "Root value is " << root->val << endl;

	preOrder(root);
	cout << endl;

	inOrder(root);
	cout << endl;

	postOrder(root);
	cout << endl;



	//cout << "Total number of nodes " << countNodes(root) << endl;

	//cout << endl << "sum=" << sumNodes(root);

	//if (searchNode(root, 16)) {
	//	cout << endl << "found" << endl;
	//}
	//cout << endl << "height=" << height(root) << endl;

	//cout << "max distance=" << maxDistance(root);

	return 0;
}