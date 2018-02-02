#include <stdio.h>

int main ()
{
    int a,d,n,count=0,t;
    scanf("%d %d %d %d",&a,&d,&n,&t);
    for(int i=a;count<n;count++)
    {
        printf("%d\t",i);
        i=(-1*(i+d)*(t-1)+(i*d*t));
    }
  return 0;
}
