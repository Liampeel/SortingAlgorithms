#include <stdio.h>

//function definition
void bubbleSort(int *a, int n){
	int k, j, tempnumber;
	for(k = 1; k <= n-1; k++){
		for(j = 0; j <= n-k-1; j++){
			if(a[j] > a[j+1]){
				tempnumber = a[j];
				a[j] = a[j+1];
				a[j+1] = tempnumber;
			}
		}
	}
}
