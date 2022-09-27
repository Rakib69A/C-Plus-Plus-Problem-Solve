#include<stdio.h>
int main()
{
	int i,j,result,count=1,max=0;
	while(scanf("%d%d",&i,&j)!=EOF)
	{
	printf("%d %d ",i,j);
	if(i>j)
	{
		int temp=i;
		i=j;
		j=temp;
	}
	while(i<=j)
	{
		int x=i;
		while(x!=1)
		{
			if(x%2!=0)
			x=(3*x)+1;
			else
			x/=2;
			count++;
			if(x==1)
			break;
		}
		if(count>max)
		max = count;
		count = 1;
		i++;
	}
	printf("%d\n",max);

}
}
