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
 * @file stats.h
 * @brief stubs the functions for the stats program
 *
 * Stubs the funcitons for the stats application.
 *
 * @author Samuel Waymouth
 * @date 16/11/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
#include <stdio.h>

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief find_minumum
 *
 * assuming an array has been sorted, it returns the item at index 0
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return int for the item at index 0
 */
int find_minimum( unsigned char test[],int size);
/**
 * @brief find_maximum
 *
 * Assuming an array has been sorted, it returns the item at index size-1
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return int for the item at index size-1
 */
int find_maximum( unsigned char test[],int size);
/**
 * @brief find_mean
 *
 * This function adds the array items together and then divides by the size.
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return int for the mean
 */
int find_mean( unsigned char test[],int size);
/**
 * @brief find_median
 *
 * Assuming the array has been sorted, this function checks ot see if the size is odd or even.
 * If the Size is even, the function calculates the middle and middle+1 index items, adds the 
 * values together and divides the sum by two.
 * If the size is odd, the function returns the value at the index of (size/2)+1
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return int for the median
 */
int find_median( unsigned char test[],int size);
/**
 * @brief print_array
 *
 * Prints the array items to stdout.
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return void
 */
void print_array( unsigned char test[],int size);
/**
 * @brief print_statistics
 *
 * Prints the array statistics to stdout.
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return void
 */
void print_statistics( unsigned char test[],int size);
/**
 * @brief sort_array
 *
 * Uses a bubblesort loop to sort the array items into numerical order.
 *
 * @param unsigned char test[] The array to process
 * @param int size The size of the array
 *
 * @return void
 */
void sort_array(unsigned char test[],int size);
/**
 * @brief main
 *
 * Runs the print_statistics method.
 *
 * @return void
 */
void main();

#endif /* __STATS_H__ */
