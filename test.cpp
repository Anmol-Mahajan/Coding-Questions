//Check if Binary tree is a BST
bool subLess(Node* root, int data){
    if(roott==NULL) return true;
    if(data>=root->data&&subLess(root->right)&&subLess(root->left)) return true;
    return false;
}
bool subGreat(Node* root, int data ){
    if(roott==NULL) return true;
    if(data<root->data&&subGreat(root->right)&&subGreat(root->left)) return true;
    return false;
}
bool isBST(Node* root){
if(root==NULL) return true;
if(subLess(root->left,root->data)&&subGreat(root->right,root->data)&&isBST(root->left)&&isBST(root->right)) return true;
else return false;
}
