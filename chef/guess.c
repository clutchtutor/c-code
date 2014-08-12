#include<stdio.h>
#include<math.h>
int guess(int a, int b)
{
	int count,e1,e2,o1,o2;
	e1=a/2;
	o1=a-e1;
	e2=b/2;
	o2=b-e2;
	count=(o1*e2)+(o2*e1);
	printf("%d\n",count);
	return count;
}
int gcd(a,b)
{
	if((a%b)==0)
		return b;
	return gcd(b,(a%b));
}
int main()
{
	int t,i,a,b,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a,&b);
		c=guess(a,b);
		if(c!=0)
		{
			d=gcd(c,(a*b));
			printf("%d/%d",c/d,(a*b)/d);
		}
		else
			printf("%d/%d",c,(a*b));
	}
	return 0;
}