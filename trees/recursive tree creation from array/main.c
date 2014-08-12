//
//  main.c
//  recursive tree creation from array
//
//  Created by Prakhar Singh on 29/07/14.
//  Copyright (c) 2014 Prakhar. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newnode(int x);
void add(struct node *node,int k,int x,int l);
void level(struct node *node,int *a,int n);
void level(struct node *node,int *a,int n)
{
    bool l=0;
    int i,k=0;
    for(i=0;i<n;i++)
    {
        add(node,k,a[i],l);
        l= !l;
        if(i==0)
            k++;
        if(i==pow(2,k))
            k++;
    }
}
void add(struct node *node,int k,int x,int l)
{
    if(k==0)
        node=newnode(x);
    else
    {
        if(l)
            add(node->left,k-1,x,l);
        else
            add(node->right,k-1,x,l);
    }
}
struct node *newnode(int x)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->data=x;
    node->left=NULL;
    node->right=NULL;
    return node;
};
void inorder(struct node *node)
{
    if(node==NULL)
        return;
    inorder(node->left);
    printf("%d ",node->data);
    inorder(node->right);
}
int main()
{
    printf("Enter the number of elements: ");
    int n,j;
    scanf("%d",&n);
    printf("Enter the elements: ");
    int a[n];
    for(j=0;j<n;j++)
        scanf("%d",&a[j]);
    struct node *root=NULL;
    level(root,a,n);
}

