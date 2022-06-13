//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
} // end main

//the swap function
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}	//end of swap function

//the printValues function
void printValues(){
	int x;
	printf("[");	//formatting purposes to meet the required output
	for(x = 0; x < MAX; x++){
		printf("%d ", values[x]);
	}
	printf("]\n");
}	//end of printvalues

//the main bubble sort program
void sort(){
	int a;
	int b;
	for(a = 0; a < MAX - 1; a++){
		for(b = 0; b < MAX - 1; b++){
			if(values[b] > values[b+1]){
				swap(&values[b], &values[b+1]);
				printValues();
			}
		}
	}
}	//end of bubble sort

