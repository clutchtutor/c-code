#include<stdlib.h>
#include<stdio.h>
struct point
{
	int x;
	int y;
};
int main()
{
	struct point q,*pp;
	q.x=1;
	q.y=2;
	pp=&q;
	printf("%d %d",(*pp).x,(*pp).y);
}
