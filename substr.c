#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,n,m;
    printf("enter the string");
    gets(str);
    printf("enter the index n to m for substring");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
