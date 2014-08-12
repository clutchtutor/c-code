#include<stdlib.h>
#include<stdio.h>
struct point
{
	int x;
	int y;
};
struct rect
{
	struct point pt1;
	struct point pt2;
};
struct point makepoint(int x,int y)
{
	struct point temp;
	temp.x=x;
	temp.y=y;
	return temp;
};
int main()
{
	struct rect screen;
	screen.pt1=makepoint(30,40);
	screen.pt2=makepoint(50,60);
	struct point p1;
	p1=makepoint(60,70);
	printf("%d %d\n",p1.x,p1.y);
}