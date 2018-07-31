#include <stdio.h>
int product(int a, int b);
int main() {
int integer1, integer2, sum;
printf("Enter first integer: ");
scanf("%d", &integer1); // read input to integer 1
printf("Enter second integer: ");
scanf("%d", &integer2); // Read input into integer2
sum = product(integer1, integer2);
printf("sum %d * %d = %d\n", integer1, integer2, sum);
return(0);
}

int product(int a, int b){
int c;
c=a*b;

return c;

}
