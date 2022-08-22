#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,a[100][100],i,j,sum,d;
     printf("enter rows");
     scanf("%d",&r);
      printf("\nenter col");
     scanf("%d",&c);
     printf("\nenter d value");
     scanf("%d",&d);
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
     		sum=sum+a[j][i];
     }
		 printf("\ncol sum=%d",sum);
	 }
	return 0; 
}


output
enter ros 3
  enter cols 3
  1 2 3
  4 5 6
  7 8 9
  col sum= 12
  col sum= 15
  col sum= 19
