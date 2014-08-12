//
//  main.c
//  trees
//
//  Created by Prakhar Singh on 28/07/14.
//  Copyright (c) 2014 Prakhar. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
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
int height(struct node *node)
{
    if(node==NULL)
        return 0;
    else
    {
        int l=height(node->left);
        int r=height(node->right);
        if(l>r)
            return l+1;
        else
            return r+1;
    }
}
void printgivenlevel(struct node *node,int i,int ltr)
{
    if(node==NULL)
        return;
    if(i==1)
        printf("%d ",node->data);
    else if(i>1)
    {
        if(!ltr)
        {
            printgivenlevel(node->right, i-1, ltr);
            printgivenlevel(node->left, i-1, ltr);
        }
        else
        {
            printgivenlevel(node->left, i-1, ltr);
            printgivenlevel(node->right, i-1, ltr);
        }
    }
}
void printspiral(struct node *node, int h)
{
    int i;
    bool ltr=false;
    for(i=1;i<=h;i++)
    {
        printgivenlevel(node,i,ltr);
        ltr= !ltr;
    }
}
int main()
{
    struct node *root=newnode(1);
    root->left=newnode(2);
    root->right=newnode(3);
    root->right->left=newnode(4);
    root->right->right=newnode(5);
    root->left->left=newnode(6);
    root->left->right=newnode(7);
    int h=height(root);
    printspiral(root,h);
    printf("\n");
}
