#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,k,count,j;
	int a[52];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d %d",&n,&k);
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			if(a[j]%2==0)
				count++;
		}
		if(k==0)
		{
			if(count==n)
				printf("NO\n");
			else if(count==0)
				printf("YES\n");
			else
				printf("YES\n");
		}
		else if(count>=k)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}