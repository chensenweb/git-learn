#include<stdio.h>
#include<stdlib.h>
#define LEN 100 
int main()
{
    char str[LEN];
    int i=0,j=0;
    fgets(str,LEN,stdin);
    for(;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            str[j++]=str[i];
            
        }
    }
    str[j]='\0';
 //   printf("%s\n",str);
}
