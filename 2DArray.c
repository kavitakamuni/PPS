#include<stdio.h>
void main()
{
	int i,j,r,c,A[5][5];
	printf("\n Enter No. of Rows and Cols ");
	scanf("%d%d",&r,&c);
	printf("\n Enter Array Elements ");
	for(i=0;i<r;i++) 
	{
		for(j=0;j<c;j++)//inner 
		 {
		 scanf("%d",&A[i][j]);//statement
       	 }
       	 
	}
		for(i=0;i<r;i++) 
	{
		for(j=0;j<c;j++)//inner 
		 {
		 printf("%d  ",A[i][j]);//statement
       	 }
       	 printf("\n");
	}
	
	
	   
	   
	   printf("\n i value after exit of loop %d",i);	  
}

