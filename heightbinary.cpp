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
        data = val;
        left = right = NULL;
    }
};


Node *buildTree( vector <int > &vs){
    static int index = -1;
    index++;

    if(vs[index] ==-1){
        return NULL;
    }

    Node *root = new Node(vs[index]);
    root->left = buildTree(vs);
    root -> right = buildTree(vs);

    return root;


}

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftht = height(root->left);
    int rightht = height(root->right);
    return max(leftht , rightht)+1;
}

int main() {
    vector<int> vs = {1, 2, -1, -1, 3, -1, -1};  // Proper tree

    Node* root = buildTree(vs);
    cout<< "Height of the tree "<<height(root)<<endl;


    

    
    return 0;
}