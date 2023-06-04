#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int m,n;
    printf("Enter the dimensions of matrix: \n");
    scanf("%d %d",&m,&n);
    int a[m+1][n+1];
    int b[m+1][n+1];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter data bit \n");
            int d;
            scanf("%d",&d);
            a[i][j]=d;
        }
        
    }
    printf("\n");
    for (int i = 0; i < m+1; i++)
    {
        int p=0;
        for (int j = 0; j < n+1; j++)
        {
            if ((j+1)%(n+1)==0)
            {
              if(p%2==0)
              {
                a[i][j]=0;
              }
              else{
                a[i][j]=1;
              }
              continue;  
            }
            p+=a[i][j];
        }
        
    }
    
    
    return 0;
}
