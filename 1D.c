#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,cout=0;
	int r=3, c=4;
	a=(int *)malloc(3*4*sizeof(int));
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			*(a+i*4+j)=cout++;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
 			printf("%d ",  *(a+i*4+j));
	        }
		printf("\n");
	}
}
	
