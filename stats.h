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
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
int find_minimum( unsigned char test[] );
int find_maximum( unsigned char test[] );
int find_mean( unsigned char test[] );
int find_median( unsigned char test[] );
void print_array( unsigned char test[], unsinged int size);
void print_statistics( unsigned char test[]);
void sort_array(unsigned char test[]);
void main();

#endif /* __STATS_H__ */
