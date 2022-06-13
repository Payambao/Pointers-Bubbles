#include <iostream>
#define MAX 9
#include "sort.h"

//function prototypes
void printValues();
void sorting();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};


void sort::swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}	//end of swap function

//the printValues function
void sort::printValues(){
	int x;
	std::cout << "[";	//formatting purposes to meet the required output
	for(x = 0; x < MAX; x++){
		cout << values[x] << " ");
	}
	std::cout << "]";
	std::cout << endl;
}	//end of printvalues

//the main bubble sort program
void sort::sorting(){
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
