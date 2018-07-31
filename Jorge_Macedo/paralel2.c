#include <stdio.h>
#include <time.h>
static int long numSteps = 100000;
int main() {
double pi = 0; 
double time=0;
clock_t start_t =clock();
// your code
for (int i=0; i<numSteps; i++) {
// your code
//deltax=1/numsteps;

pi=pi+ 4.0/(1+(1/numSteps*(0.5+i))*(1/numSteps*(0.5+i)));
}
clock_t end_t=clock();
time = (double)(end_t-start_t)/CLOCKS_PER_SEC;
// your code
//printf(“PI = %d, duration: %d ms\n”,pi, time);
printf(“PI = %d, duration: %d \n”,pi, time);
return 0;
}
