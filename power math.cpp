#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int i,j=4,n,x;
	printf("n= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		x=pow(j,i);
		printf("%d  ",x);
	}
	getch();
}
