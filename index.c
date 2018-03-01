#include <stdio.h>

int main()
{
    int n,num,a[100],flag=0;
    scanf("%d",&n);
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         if(a[i] == num) 
        {
            printf("%d",i); 
            flag=1;
            break;
        }
    }
    if(flag == 0)
    {
       printf("-1");
    }
    
    return 0;
}
