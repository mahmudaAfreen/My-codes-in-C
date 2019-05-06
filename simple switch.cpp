#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
	int a,b,c;
	char opt;
	printf("enter operator '+',or'-',or'*',or'/'=");
	opt=getchar();
	printf("enter a value for a=");
	scanf("%d",&a);
	printf("enter a value for b=");
	scanf("%d",&b);
	switch(opt)
	{
		case'+':
			c=a+b;
			printf("%d+%d=%d",a,b,c);
			break;
		case'-':
			c=a-b;
			printf("%d-%d=%d",a,b,c);
			break;
		case'*':
			c=a*b;
			printf("%d*%d=%d",a,b,c);
			break;
		case'/':
			c=a/b;
			printf("%d/%d=%d",a,b,c);
			break;
			
			default:
			printf("error opt");			
	}
	getch();
}
