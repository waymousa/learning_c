/******************************************************************************
 * Copyright (C) 2021 by Samuel Waymouth - Amazon Web Services
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Performs statistical analysis of an array
 *
 * Given an unsigned char array, calculates the mean, median, min and max.
 *
 * @author Samuel Waymouth
 * @date 2021
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
  print_statistics(test,SIZE);
}

void print_statistics(unsigned char test[], int size){
  int min,max,mean,med;
  sort_array(test,SIZE);
  print_array(test,SIZE);
  min=find_minimum(test,size);
  printf("Minimum: %d\n", min);
  max=find_maximum(test,size);
  printf("Maximum: %d\n", max);
  mean=find_mean(test,size);
  printf("Mean: %d\n", mean);
  med=find_median(test,size);
  printf("Median: %d\n", med);
}

void sort_array(unsigned char test[], int size){
  unsigned char temp;
  int inner,outer;
  for(outer=0;outer<size-1;outer++){
    for(inner=outer+1;inner<size;inner++){
      if(test[outer]>test[inner]){
        temp=test[outer];
        test[outer]=test[inner];
        test[inner]=temp;
      }
    }
  }
}

void print_array(unsigned char test[], int size){
  puts("Array:");
  for (int i = 0; i < size; ++i) {
    if(i<SIZE-1){
      printf("test[%d] = %d, ", i, test[i]);
    }else{
      printf("test[%d] = %d", i, test[i]);
    }    
  }
  printf("\b\b\n");
}

int find_minimum( unsigned char test[], int size){
  //printf("First index is %d, value is %d.\n", 0, test[0]);
  return test[0];
}

int find_maximum( unsigned char test[], int size){
  //printf("Last index is: %d, value is %d.\n", size-1, test[size-1]);
  return test[size-1];
}

int find_mean( unsigned char test[], int size){
  int sum,mean;
  for (int i = 0; i < size; ++i) {
    sum = sum + test[i];
  }
  //printf("Sum is: %d\n", sum);
  mean = sum/size;
  //printf("Mean is: %d\n", mean);
  return mean;
}

int find_median(unsigned char test[], int size){
  int middle,median;
  if(size % 2 == 0){
    middle=size/2;
    int a = test[middle-1];
    int b = test[middle];
    median = (a+b)/2;
  } else {
    middle=(size/2)+1;
    median = test[middle];
  }
  return median;
}