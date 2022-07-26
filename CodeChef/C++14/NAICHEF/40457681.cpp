#include<stdio.h>
#include<math.h>
int main()
{
	float x;
	int ctr1,ctr2,t,n,a,b,i;
	scanf("%d",&t);
	while(t--)
	{
		ctr1=ctr2=0;
		scanf("%d%d%d",&n,&a,&b);
		int ar[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&ar[i]);
			if(ar[i]==a)
			ctr1++;
			if(ar[i]==b)
			ctr2++;
		}
		x=ctr1*ctr2;
		x=x/pow(n,2);
		printf("%f\n",x);
	}
	return 0;
}