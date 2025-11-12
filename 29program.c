#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter three numbers:");
 scanf("%d%d%d",&a,&b,&c);
 if(b>a&&b>c)
 {
    printf("larger number=%d\n",b);
 }
 else if(a>b&&a>c)
 {
    printf("larger number=%d\n",a);
 }
 else
 {
    printf("larger number=%d\n",c);
 }
 return 0;   
}