#include<stdio.h>
#include<ctype.h>
#include<conio.h>
 main()
{
	int n,a,b,c,d,e,f,g,h,i,j,k,ch;
	printf("enter ch");
	ch=getchar();
	switch(ch)
	{
		case 'a':
			for(i=5;i>=5;i++)
			{ 
			for(j=1;j<=i;j++)
			printf("*");
			printf("\n");
	    	}
			break;
		case'b':
			printf("enter a value for n=");
			scanf("%d",&n);
			for(i=n;i>=0;i--)
			{
				for(j=1;j<=i;j++)
				printf("*");
				printf("\n");
				
			}
			break;
		case 'c':
			    for(i=5;i>=1;i--)
			    {
			    	for(j=5;j>i;j++)
			       	{
				     printf("  ");
				     }
			    	for(k=i;k<2*i;k++)
			    	{
			    	printf("* ");
			        }
			    	printf("\n");
				    }
				break;
				case'd':
					printf("enter the num of n=");
					scanf("%d",&n);
					for(i=1;i<=n;i++)
					{
						for(j=1;j<=n;j++)
						{
							if(j<=n-i)
							{
								printf(" ");
							}
							else
							{
								printf("*");
							}
							printf("\n");
						}
						break;
				case'e':
				    printf("enter a value of n=");
					scanf("%d",&n);
					
					for(i=1;i<n;i++)
					{
						for(j=1;j<5-i;j++)
						printf("  ");
					}
					{
						for(j=1;j<2*i-1;j++)
						printf("* ");
						printf("\n");
					}
					break;
				case'f':
					printf("enter value of n=");
					scanf("%d",&n); 
					for(i=1;i<=n;i++)
					{
					for(j=1;j<=i;j++)
					{
						printf("*");
					}
					printf("\n");
				    }
				    for(i=n;i>=1;i++)
					{
					for(j=1;j<=i;j++)
					{
					printf("* ");
				    }
                     printf("\n");
                     }
					break;
				case'g':
					for(i=-5;i<5;i++)
					{
						for(j=0;j<5;j++)
					
					
						if(i*i<=j*j)
						{
							printf("*\t");
						
						}
						else
						{
							printf("  ");
						}
						printf("\n");
					}
					break;
				case'h':
					n=5;
					for(i=5;i>-5;i--)
					{
						for(j=1;j<n;j++)
						printf(" ");
						n--;
						for(j=1;j<=2*i-1;j++)
						{
						printf("* ");
					    }
					
					
					printf("\n");
				    }
					break;
					default:
						printf("error");
						break;
					}
	
		getch();
         }
     }
