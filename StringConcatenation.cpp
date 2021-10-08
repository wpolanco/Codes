
#include<stdio.h>
#include<string.h>
int main ()
{
char stra[100], strb[100], strc[100];
int i=0, j=0, k=0;
printf("Enter the first string:");
gets(stra);
printf("\n First string is:");
puts(stra);
printf("\n Enter the second string:");
gets(strb);
printf("\n second string is:");
puts(strb);

int la, lb, count=1;
char a[5];
la=strlen(stra);
lb=strlen(strb);
if(la==lb)
{
while(stra[i]!='\0')
{
if(stra[i]==strb[i])
{
a[j]=stra[i];
i++;
j++;
   }
else
{
printf("\n The string is equal upto length %d",i);
printf("\n The string is not equal!!!");
printf("\n");
putchar(stra[i]);
printf(" with compare to ");
putchar(strb[i]);
i++;
count=0;
      }
      //k++;
}
}

if(count==1)
printf("\n The string is equal!!!");
else
{
printf("\nThe charaters are equal are:");
for(k=0;k<=j;k++)
printf("%c", a[k]);
}


if(la!=lb)
{
   if(stra[i]>strb[i])
    printf("\n The stringa is greater than stringb!!!");
     else if(stra[i]<strb[i])
    {
printf("\n String a is less than string b");
    }
   
}
return 0;
}

