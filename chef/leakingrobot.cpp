#include<iostream>
using namespace std;
int main()
{
	int t,x,y,i,e=1,n=0,w=0,s=0,c,a=0,b=0,flag=0;
	cin>>t;
	for(i=0;i<t;i++)
	{	
		c=1;
		cin>>x>>y;
		while(a<x && b<x)
		{
			if(a)
			if(e==1)
			{
				a=a+c;
				n=1;
				e=0;
				c++;
			}
			if(n==1)
			{
				b=b+c;
				n=0;
				w=1;
				c++;
			}
			if(w==1)
			{
				a=a-c;
				w=0;
				s=1;
				c++;
			}
			if(s==1)
			{
				b=b-c;
				s=0;
				e=0;
				c++;
			}
		}
		if(flag==1)
			cout<<"NO"<<endl;
	}
	return 0;
}