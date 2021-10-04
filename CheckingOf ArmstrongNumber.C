#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int OriginalNumber, num,remainder,n=0;
  float result = 0.0;

  printf("Enter the number:");
  scanf("%d", &num);

  OriginalNumber = num;

  for(OriginalNumber = num; OriginalNumber!=0;++n)
  {
      OriginalNumber/=10;
  }
  for(OriginalNumber = num; OriginalNumber!=0;OriginalNumber/=10)
  {
      remainder = OriginalNumber%10;
      result += pow(remainder,n);
  }

  if(result==num){
   printf("%d is Armstrong number.",num);
   }
     else
    printf("%d is not the Armstrong number.",num);

    return 0;
}
