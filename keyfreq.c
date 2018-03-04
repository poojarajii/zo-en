#include <stdio.h>

int main()
{
    int n,count=0,flag=0,loop=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=0)
        {
            key=arr[i];
            flag=1;
        }
        if(flag==1)
        {
        for(int j=0;j<5;j++)
        {
            if(arr[j]==key)
            {
                count++;
                arr[j]=-1;
                loop++;
            }
            flag=0;
        }
        printf("%d-->%d\n",key,count);
        count=0;
        }
        if(loop==n)
        {
            break;
        }
    }
    
    return 0;
}
