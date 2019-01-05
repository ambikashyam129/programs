#include<stdio.h>
void main()
{
int low,i,high,temp,rem,result=0;
printf("enter the intervals");
scanf("%d%d",&low,&high);
printf("amstrong numbers b/w %d and %d are",low,high);
for(i=low+1;i<high;i++)
{
temp=i;
while(temp!=0)
{
rem=temp%10;
result=result+rem*rem*rem;
temp=temp/10;
}
if(result==i)
{
printf("%d\n",i);
}
result=0;
}
}

