//
//  main.c
//  arrays
//
//  Created by Prakhar Singh on 29/07/14.
//  Copyright (c) 2014 Prakhar. All rights reserved.
//

#include <stdio.h>
int secondelement(int *a,int m,int l, int r);
int binsrch(int *a,int l,int r,int key);
int secondelement(int *a,int m,int l,int r)
{
    if(m==l || m==r)
        return -1;
    if(a[m]>a[l] && a[m]<a[r])
        return m;
    if(a[r]<=a[m] && a[r]>=a[l])
        return r;
    if(a[l]<=a[r] && a[l]>=a[m])
        return l;
    return -1;
}
int binsrch(int *a,int l,int r,int key)
{
    if(r>=l)
    {
        int m;
        m=(l+r)/2;
        if(a[m]==key)
            return m;
        if(m>l && a[m-1]==key)
            return m-1;
        if(m<r && a[m+1]==key)
            return m+1;
        int d=secondelement(a, m, l, r);
        if(d==-1)
            return -1;
        if(a[d]>key)
            return binsrch(a,l,d-1,key);
        else
            return binsrch(a, d+1, r, key);
    }
    return -1;
}
int main()
{
    int a[]={3,2,10,4,40};
    int n=sizeof(a)/sizeof(a[0]);
    int key=3;
    int result=binsrch(a,0,n-1,key);
    if(result==-1)
        printf("Not there\n");
    else
        printf("there\n");
    return 0;
}




