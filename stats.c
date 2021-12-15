/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test);
  sort_array(test);
  print_array(test);
  print_statistics(test);

}

void print_statistics(unsigned char test[]){
  printf("print stats to be implemented.");
}

void sort_array(unsigned char test[]){
  unsigned char temp;
  int inner,outer;
  for(outer=0;outer<SIZE-1;outer++){
    for(inner=outer+1;inner<SIZE;inner++){
      if(test[outer]>test[inner]){
        temp=test[outer];
        test[outer]=test[inner];
        test[inner]=temp;
      }
    }
  }
}

void print_array(unsigned char test[]){
  puts("Array:");
  for (int i = 0; i < SIZE; ++i) {
    if(i<SIZE-1){
      printf("test[%d] = %d, ", i, test[i]);
    }else{
      printf("test[%d] = %d", i, test[i]);
    }    
  }
  printf("\b\b\n");
}

/* Add other Implementation File Code Here */
