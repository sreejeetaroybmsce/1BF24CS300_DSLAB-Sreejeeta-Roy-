#include<stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *left,*right;
};
struct Node* createNode(int value)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;

}
struct Node* insert(struct Node *root,int value)
{
    if(root==NULL)
        return createNode(value);
    if(value<root->data)
        root->left=insert(root->left,value);
    else if(value>root->data)
        root->right=insert(root->right,value);


    return root;


}
void inorder(struct Node *root)
{
    if(root==NULL)
        return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}
void preorder(struct Node *root)
{
    if(root==NULL)
        return;
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);

}
void display(struct Node *root)
{
    printf("BST Elements in order:");
    inorder(root);
    printf("\n");
}
void postorder(struct Node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int main() {
    int choice,value;
    struct Node *root=NULL;

    while (1) {
        printf("Binary Search tree\n");
        printf("1. Insert to BST\n");
        printf("2. In order Traversal\n");
        printf("3. Pre order Traversal\n");
        printf("4. Post Order Traversal\n");
        printf("5.Display BST\n");
        printf("6.Exit\n");
        printf("Enter your choice:\n ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root=insert(root,value);
                break;

            case 2:
                printf("In order Traversal ");
                inorder(root);
                printf("\n");
                break;

            case 3:
                printf("Pre-order Traversal:");
                preorder(root);
                printf("\n");
                break;

            case 4:
                printf("Postorder Traversal:");
                postorder(root);
                printf("\n");
                break;


            case 5:
                display(root);
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

