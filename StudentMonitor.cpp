
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,j,i,k=4,count1=1,count2=1,count3=1,count4=1;
printf("Enter the value of n:");
scanf("%d", &n);
int arr[n];
if(n%4!=0)
{
printf("Input not acceptable");
}
else
{
for(i=1;i<=n;i++)
{
if(i<=3)
{
arr[i]=i;
}
else
{
for(j=2;j<=round(sqrt(i));j++)
{
if(i%j==0)
{
break;
}
}
    if(j>round(sqrt(i)))
  {
arr[k]=i;
k++;
}
}
}
printf("Monitor group:");
for(i=1;i<k;i++)
printf("%d \t",arr[i]);

}
int d,d1,d2,d3;
d=n/4;
d1=2*d;
d2=3*d;
d3=4*d;
printf("\n %d",d);
    for(i=1;i<k;i++)
    {
    if(i<=d&&count1<=3)
    {
    count1++;
    printf("\n Active monitor for section A is: %d", arr[i]);
}
    }
    count1=1;
     for(i=2*d;i<3*d;i++)
     {
if(count1<=3)
    {
    count1++;
    printf("\n Active monitor for section B is: %d", arr[i]);
}

}
count1=1;
for(i=1;i<k;i++)
{
   if((i>2*d&&i<=3*d)&&(count1<=9))
    {
    count3++;
    printf("\n Active monitor for section C is: %d", arr[i]);
}
}
count1=1;
for(i=1;i<k;i++)
{
if((i>3*d&&i<=4*d)&&(count1<=12))
    {
    count4++;
    printf("\n Active monitor for section D is: %d", arr[i]);
}
    }

return 0;
}

