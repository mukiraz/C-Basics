#include<stdio.h>
typedef struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;


TreeNode* createNode(int x) {
    TreeNode* t = (TreeNode*) malloc(sizeof(TreeNode));
    t->data = x;
    t->left = t->right = NULL;
    return t;
}
void preorder(TreeNode *root) {
    if(root != NULL) {
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
    }
}
void inorder(TreeNode *root) {
    if(root != NULL) {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
    }
}
void postorder(TreeNode *root) {
    if(root != NULL) {
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
    }
}
int main(void) {
TreeNode *root = createNode(7);
root->left = createNode(8);
root->right = createNode(9);
root->left->left = createNode(2);
printf("\nPreorder gezinme: ");
preorder(root);
printf("\nInorder gezinme: ");
inorder(root);
printf("\nPostorder gezinme: ");
postorder(root);
getch();
return 0;
}
