//
//  main.c
//  child sum property
//
//  Created by Prakhar Singh on 29/07/14.
//  Copyright (c) 2014 Prakhar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int x)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->data=x;
    node->left=NULL;
    node->right=NULL;
    return node;
};
int childsum(struct node *node)
{
    if(node==NULL || (node->left==NULL && node->right==NULL))
        return 1;
    else
    {
        childsum(node->left);
        childsum(node->right);
        int left_node,right_node;
        if(node->left!=NULL)
            left_node=node->left->data;
        if(node->right!=NULL)
            right_node=node->right->data;
        if(node->data==(left_node+right_node))
            return 1;
        else
            return 0;
    }
}
int main()
{
    struct node *root=newnode(10);
    root->left=newnode(8);
    root->right=newnode(2);
    root->left->left=newnode(3);
    root->left->right=newnode(5);
    root->right->right=newnode(2);
    int ans=childsum(root);
    if(ans==1)
        printf("It follows\n");
    else
        printf("It does not follow\n");
    return 0;
}

