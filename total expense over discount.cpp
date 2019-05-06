#include<stdio.h>
#include<conio.h>
int main()
{
	int totalexp,qnty,price,discount;
	printf("enter quantity=");
	scanf("%d",&qnty);
	printf("enter price=");
	scanf("%d",&price);
	totalexp=(qnty*price);
	 
	 if(totalexp>1000)
	 {
	 	discount=(totalexp*0.15);
	 	totalexp=totalexp-discount;
	 }
	printf("totalexpns Rs=%d",totalexp);
	return 0;
	
}
