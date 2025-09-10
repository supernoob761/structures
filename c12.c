#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node *left;
    struct Node *right;
};

void preorder(struct Node *n){
    if(!n) return;
    printf("%d ",n->value);
    preorder(n->left);
    preorder(n->right);
}

int main(){
    struct Node *root=malloc(sizeof(struct Node));
    root->value=4;
    root->left=malloc(sizeof(struct Node));
    root->left->value=27;
    root->left->left=root->left->right=NULL;
    root->right=malloc(sizeof(struct Node));
    root->right->value=3;
    root->right->left=root->right->right=NULL;

    preorder(root);
    
    free(root->left);
    free(root->right);
    free(root);
    return 0;
}
