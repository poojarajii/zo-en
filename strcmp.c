#include <stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int count=1,x=0,i=0,j;
    scanf("%s",s);
    while(i<strlen(s))
    {
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
            else
            {
                break;
            }
            
        }
        printf("%c",s[i]);
        if(count!=1)
        {
            printf("%d",count);
        }
        count=1;
        i=j;
    }
    return 0;
}
