#include<stdio.h>
int main(int argv, char**argc){
	int nDigit=0, nWhite=0, nOther=0, char c;
	while ((c=getchar()) !=EOF){
        
	if (c=='0')	
	nDigit++;
	else if (c=='1')
	nDigit++;
	else 
	nOther++;

}
	printf("Num DIgit: %d Num Other: %d\n":nDigit, nother);
	return 0;
}
