#include<stdio.h>
int main()
{
int row,n,inc_col,dec_col,space,limit=0;
n=5;
for(row=0;row<n;row++)
{
    for(inc_col=1;inc_col<=n-row;inc_col++)
    {
        printf("%d",inc_col);
    }
    for(space=0;space<limit;space++)
    {
        printf("*");
    }
    for(dec_col=n-row;dec_col>0;dec_col--)
    {
        printf("%d",dec_col);
    }
    limit=limit+2;
    printf("\n");
}
return 0;
}
