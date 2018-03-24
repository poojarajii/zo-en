#include <stdio.h>

int main()
{
    int n,b,result=0,i=1;
    scanf("%d %d",&n,&b);
    while(n!=0)
    {
        int r=n%b;
        n=n/b;
        result+=(r*i);
        i=i*10;
    }
    
    printf("%d",result);

    return 0;
}
