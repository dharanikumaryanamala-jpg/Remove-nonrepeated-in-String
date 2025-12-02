#include <stdio.h>
#include<string.h>
char rm_nonrepeated(char*);
int main()
{
    char s[20],i;
    scanf("%s",s);
    
    rm_nonrepeated(s);
}
char rm_nonrepeated(char *p)
{
    int i,j,count=0;
    int n=strlen(p);
    for(i=0;p[i];i++)
    {
        count=0;
        for(j=0;p[j];j++)
        {
            if(i==j)
            {
                continue;
            }
            if(p[i]==p[j])
            {
              count=1;
              break;
            }
        }
        if(count==0)
        {
            memmove(p+i,p+i+1,strlen(p+i+1)+1);
            i--;
            //n--;
        }
    }
    printf("%s",p);
}
