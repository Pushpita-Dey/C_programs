#include <stdio.h>
int main()
{
    int R,C,T,i,j,k,arr[5][5][5];
    printf("enter the numbers of tables, rows and columns: ");
    scanf(" %d %d %d",&T,&R,&C);
    printf("enter the values in the array-> \n\n");
	for(i=1;i<=T;i++)                                                   ///for tables
	{
		for(j=1;j<=R;j++)                                              ///for rows
		{
			for(k=1;k<=C;k++)                                         ///for columns
			{
				printf("the elements at array [%d][%d][%d]: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("printing the values in 3d array: \n\n");
	for(i=1;i<=T;i++)
	{
		for(j=1;j<=R;j++)
		{
			for(k=1;k<=C;k++)
			{
				printf("%d ",arr[i][j][k]);
				if(k==3)
				{
					printf("\n");
				}
			}
		}
		printf("\n");
	}
	return 0;


}

