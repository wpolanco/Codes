#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
      scanf("%d",&mat[i][j]);
      int prinicipalDiagonal=0;
      for(int i=0;i<n;i++)
      prinicipalDiagonal+=mat[i][i];
      int secondaryDiagonal=0;
      for(int i=0;i<n;i++)
      secondaryDiagonal+=mat[i][n-i-1];
      int diff=prinicipalDiagonal - secondaryDiagonal ;
      
      diff= abs(diff);
      printf("%d",diff);
            return 0;
      
}
