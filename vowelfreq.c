#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    char v[5]={'a','e','i','o','u'};
    int vfreq[5]={0,0,0,0,0};
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='A')
        {
        vfreq[0]+=1;
        }
        else if(str[i]=='e' || str[i]=='E')
        {
        vfreq[1]+=1;
        }
        else if(str[i]=='i' || str[i]=='I')
        {
        vfreq[2]+=1;
        }
        else if(str[i]=='o' || str[i]=='O')
        {
        vfreq[3]+=1;
        }
        else if(str[i]=='u' || str[i]=='U')
        {
        vfreq[4]+=1;
        }
        
    }
    for(int i=0;i<5;i++)
    {
        if(vfreq[i]>0)
        {
        printf("%c-->%d\n",v[i],vfreq[i]);
        }
        
    }
    
    return 0;
}
