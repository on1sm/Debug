#include <stdio.h>
#include <string.h>
int main() {
    int matrix_a[10][10]={0};
    int matrix_b[10][10]={0};
    int m;
    int n;
    scanf("%d%d",&m,&n);
    int mat[m][m];
    //memset(mat,0,sizeof(mat));
    int i;
    int j;
    int k;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matrix_b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            mat[i][j]=0;
        }
    }
   for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                mat[i][j]+=(matrix_a[i][k]*matrix_b[k][j]);
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
        	if(j==m-1&&i==n)
        		printf("%d",mat[i][j]);
            else if(j==m-1&&i!=n)
                printf("%d\n",mat[i][j]);
            else if(j!=m-1)
                printf("%d ",mat[i][j]);
	    else 
		printf("%d",mat[i][j]);
        }
    }
    return 0;
}
