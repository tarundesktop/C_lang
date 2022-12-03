/*print pattern
*******
******
***** 
****
***
**
*   */

#include<stdio.h>

void main() {
	int n;
	printf("Enter Number: ");
	scanf("%d", &n);
	for(int i=n; i>=1; i--){
		printf("\t");
		for(int j=1; j<=i; j++){
			printf(" *");
		}
		printf("\n");
	}
}
