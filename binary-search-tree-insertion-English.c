//https://www.hackerrank.com/challenges/binary-search-tree-insertion/problem
#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:

  	void preOrder(Node *root) {

      	if( root == NULL )
          	return;

      	std::cout << root->data << " ";

      	preOrder(root->left);
      	preOrder(root->right);
    }
  /* you only have to complete the function given below.
node is defined as

struct node {

    int data;
    struct node *left;
    struct node *right;

};

*/
struct node* createbst(int data){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
struct node* insert( struct node* root, int data ) {
    if(root == NULL)
    root=createbst(data);
    else if(data<=root->data)
        root->left=insert(root->left,data);
          else
              root->right=insert(root->right,data);
    return root;

}
};

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.preOrder(root);

    return 0;
}
