#include<bits/stdc++.h>
using namespace std;
struct Node{
    Node* right,*left;
    int data;
};
bool hasPathSum(Node* root,int sum){
    if(root==NULL return 0;
    else{

        int subsum=sum-root->data;
        bool ans=0;
        if(subsum==0&&root->right==NULL&&root->left==NULL){
            return 1;

        }
        if(root->left){
            ans=ans||hasPathSum(root->left,subsum);

        }
        if(root->right){
            ans=ans||hasPathSum(root->right,subsum);

        }

    }
    return ans;
}
