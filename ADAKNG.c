#include<stdio.h>
int range(int x)
{
	if(x>=1 && x<=8)
	return 1;
	else
	return 0;
}
int main()
{
	int t,r,c,k,row,col,r1,r2,c1,c2,count;
	scanf("%d",&t);
	while(t--)
	{
		row=1;
		col=1;
		count=1;
		scanf("%d %d %d",&r,&c,&k);
		r1=r;
		r2=r;
		c1=c;
		c2=c;
		while(k--)
		{
			r1=r1-1;
			c1=c1-1;
			r2=r2+1;
			c2=c2+1;
			row=row+range(r1)+range(r2);
			col=col+range(c1)+range(c2);
			count=row*col;
		}
		printf("%d\n",count);
	}
}