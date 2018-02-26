#include <stdio.h>
#include <string.h>

int main()
{
    int n,j=0,i=0;
    char num[10000],temp;
    scanf("%s",num);
    scanf("%d",&n);
    while(j<n)
    {
        temp=num[0];
        for(i=0;i<strlen(num)-1;i++)
        {
            num[i]=num[i+1];
        }
        num[i]=temp;
        j++;
    }
    printf("%s",num);
    return 0;
}
