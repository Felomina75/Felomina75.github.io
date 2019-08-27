#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,i;
	clrscr();
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	printf("Sum=%d",sum);
	getch();
}