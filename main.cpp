#include <iostream>
#include "sort.h"

//function prototypes
void printValues();
void sorting();
void swap(int*, int*);

int main(){
std::cout << "Before: \n";
    printValues();
    sorting();
std::cout << "After: \n";
    printValues();

  return(0);
} // end main
