#include <stdio.h>
int main(void)
{
  float ans,h,l1,l2,suml;
  printf("Enter L1 : ");
  scanf("%f",&l1);
  printf("Enter L2 : ");
  scanf("%f",&l2);
  printf("Enter H : ");
  scanf("%f",&h);
  suml = l1 + l2;
  ans = (h * suml) / 2;
  printf("Answer = %.2f \n",ans);
  return 0;
}