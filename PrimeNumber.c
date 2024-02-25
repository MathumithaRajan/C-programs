/*
****************** find prime Number ******************
description:- prime number is divisible only by 1 and itself
            - so having the number multiply from 1 to itself in loop and check for its divisiblity
            - when the remainder results in 0 for anyother value its not a prime number
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int num,i;
	printf("enter the number: ");
	scanf("%d",&num);
	for ( i=2; i<num; i++)
{
	if (num%i == 0)
		{
     printf("its not a prime number");
		break; //once this break is encountered, the loop breaks as the condition mentioned is satisfied
		}
}

if (i==num)
{
	printf("its a prime no.");
}
return 0;
}