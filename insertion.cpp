//insertion.cpp
//given started code from the base assignment ; made a slight revision for c++
#include <iostream>
#define MAX 9
using namespace std;


//function prototypes
void printValues();
void insertion();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
    cout << "Before: \n";
    printValues();
    insertion();
    cout << "After: \n";
    printValues();

  return(0);
} // end main

//the swap function
//used the same swap function from base assignment
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}	//end of swap function

//the printValues function
void printValues(){
	int x;
	cout << "[";	//formatting purposes to meet the required output
	for(x = 0; x < MAX; x++){
		cout << values[x] << " ";
	}
	cout << "]";
	cout << endl;
}	//end of printvalues

//the main bubble sort program
void insertion(){
	int a;
	int b;
	int c;
	
	for(c = 0; c < MAX; c++){
	   a = c;
	   while(a > 0 && values[a-1] > values[a]){
			b = values[a];
			values[a] = values[a-1];
			values[a-1] = b;
			a = a -1;
			printValues();
		}
	}
}	//end of bubble sort

