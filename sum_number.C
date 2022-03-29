#include <stdint.h>
#include <cstdio>
int main(){
  int var1 = 0;
  int var2 = 0;
  int var3 = 0;
  int sum = 0;
  printf("Please enter the first integral: ");
  scanf("%d",&var1);
  printf("Please enter the second integral: ");
  scanf("%d",&var2);
  printf("Please enter the third integral: ");
  scanf("%d",&var3);
  sum = var1 + var2 + var3;
  printf("Sum is %d.\n",sum);
  return 0;
}
