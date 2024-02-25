//***** multiplication table using while loop *****

#include <stdio.h>
#include <stdlib.h>

int main(){

int a,b, product;
printf("enter the multiplicand: ");
scanf("%d",&a);
for ( b=0; b<=10; b=b+1)
 { product = a * b;
   printf("%d x %d = %d", a,b,product);
}
return 0;
}