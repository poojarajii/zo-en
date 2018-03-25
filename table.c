#include<stdio.h>

int main() 
{
    printf("A\tB\tC\tO/P\n");
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            for(int k=0;k<=1;k++)
            {
                printf("%d\t%d\t%d\t%d\n",i,j,k,(i|j|k));
            }
        }
    } 
}
