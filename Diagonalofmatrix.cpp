#include<stdio.h>
int main()
{
    int A[10][10],i,j,m,n,sum = 0;
    printf("Enter no. of rows(m) :: ");
        scanf("%d", &m);
        printf("\nEnter no. of cols(n) :: ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a [%d][%d] value :: ",i,j);
                 scanf("%d", &A[i][j]);
        }  }
    printf("\nThe Diagonals elements of a matrix are :: \n\n");
    
    if(m==n)
    {      
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j){
					    printf("\t%d", A[i][j]);  
						}    
                    else{
					      printf("\t");   
                }}
                printf("\n\n");} }   
				    else{
				        printf("\nMatrix is not a Square Matrix.");}   
				    return 0;
				}
