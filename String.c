#include <stdio.h>
int main()
{
    int x[3][3];
    int *p = &x[0][0];
    int i,j,y;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("element - [%d] [%d] : ",i,j);
        scanf("%d", (p + i*3 + j));
    }}
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf("%d ", *(p + i*3 + j));
        if(j==2){
            printf("\n");
        }
    }
    }
    y = x[0][0] + x[1][1] + x[2][2];
    printf("The sum of Diagonal elements is: %d",y);
}
