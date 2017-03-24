#include <stdio.h>

//function declaration
void bubbleSort(int *a, int n);

int main(){
	//variable declaration
	int numbers[5], i;

	printf("Enter numbers\n");
	//input of numbers
	for(i = 0; i < 5; i++)
		scanf("%d", &numbers[i]);

	//sort
	bubbleSort(numbers,5);	//sending numbers address and sorting them
	printf("Sorted Numbers\n");
	//output
	for(i = 0; i < 5; i++)

		printf("%d\n", numbers[i]);

	return 0;
}

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
