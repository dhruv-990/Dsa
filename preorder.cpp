#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Node{

    public:

    int data;
    Node *left;
    Node *right;
    Node(int val){
        data =val;
        left = right = NULL;
    }
};

Node *buildTree( vector <int > &pre){
    static int index = -1;
    index++;

    if(pre[index] ==-1){
        return NULL;
    }

    Node *root = new Node(pre[index]);
    root->left = buildTree(pre);
    root -> right = buildTree(pre);

    return root;


}
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}





int main() {

    vector<int> pre = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node *root = buildTree(pre);

   
    cout << "Preorder Traversal: ";
    preorder(root);
    cout << endl;
    return 0;
}