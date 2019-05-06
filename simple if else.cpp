#include<stdio.h>
int main()
{
	int p,c,m,t;
	printf("eligibility criteria:\n");
	printf("marks in math>=65\n");
	printf("marks in phy>=55\n");
	printf("marks in che>=50\n");
	printf("marks in total>=170\n");
	
	printf("enter the marks obtain in phy,chem,math=");
	scanf("%d%d%d",&p,&c,&m);
	printf("total marks=%d\n",t=m+p+c);
	
	if(m>=65)
	{
	printf("eligible for admission\n");
	}
    if(p>=55)
	{
	printf("eligible for admission\n");
	}
		if(c>=50)
	{
	printf("eligible for admission\n");
	}
	if(t>=170)
	{
	printf("eligible for admission\n");
	}
	else
	{
	printf("is not eligible\n");
    } 
	
	return 0; 
}
