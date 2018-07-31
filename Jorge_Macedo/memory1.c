#include <stdio.h>
#include <stdlib.h>
int mysum (int data, int size)
int main(int argc, const char **argv) {
 int sum=0;
 int size=argc-1;
 int *data=(int *)malloc(size*sizeof(int));
for (int i=0;i<size;i++){
	data[i]=atof(argv[i+1]);
	printf("%d+", data[i]);
	
	}
	sum=mysum(data,size);
	printf("=%d\n", sum;

}
/*
int n;
double *array1=0, *array2=0, *array3=0;
// get n
printf("enter n: ");
scanf("%d", &n);
if (n <=0) {printf (“You idiot\n”); return(0);}
// allocate memory & set the data
array1 = (double *)malloc(n*sizeof(double));
for (int i=0; i<n; i++) {
array1[i] = 0.5*i;
}
array2 = array1;
array3 = &array1[0];
}
for (int i=0; i<n; i++, array3++) {
double value1 = array1[i];
double value2 = *array2++;
double value3 = *array3;
printf("%.4f %.4f %.4f\n", value1, value2, value3);
}
// free the array
free(array1);
return(0);
}
*/
int mysum(int data, int size){
	int sum;	
	while (size>0){
	   sum=sum+data[size-1];		
           size--;}
  	return sum;
/*	if (size=1)
		return data[0]
	else
		return data[0]+mysym(,size-1)
*/

}
	

