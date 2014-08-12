#include<stdio.h>
int pro(int a[], int n)
{
	int count=0;
	int ans=0,i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			count++;
		}
		else if(a[i]==0)
		{
			ans=ans>count?ans:count;
			count=0;
		}
	}
	ans=ans>count?ans:count;
	return ans;
}
int main()
{
	int n,j;
	scanf("%d",&n);
	int a[n];
	for(j=0;j<n;j++)
	{
		scanf("%d",&a[j]);
	}
	int ans=pro(a,n);
	printf("%d\n",ans);
	return 0;
}