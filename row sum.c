#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,a[100][100],i,j,sum;
     printf("enter rows");
     scanf("%d",&r);
      printf("\nenter col");
     scanf("%d",&c);
     for(i=0;i<r;i++)
     {
     	for(j=0;j<c;j++)
     	{
     		scanf("%d",&a[i][j]);
		 }
	 }
	 for(i=0;i<r;i++)
     {
     	sum=0;
     	for(j=0;j<c;j++)
     	{
     		sum=sum+a[i][j];
		 }
		 printf("\nrow sum=%d",sum);
	 }
	return 0; 
}


outpu:
enter rows 3
enter cols 3
1 2 3
4 5 6
7 8 9
row sum 6
row sum 15
row sum 24
