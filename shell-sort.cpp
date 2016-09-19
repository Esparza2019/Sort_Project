//============================================================================
// Name        : shell-sort.cpp
// Author      : Akash Kundu
// Date        : 9/17/2016
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>


void InsertionSort(int A[], int size){
    
    int sort_element;
    //int compare = 0; //Used for testing, should be global to keep tack
    int insert_loc = 0;
    char temp_sort;
    
    
    for(int i = 1; i < size; i++) // Cycle through array, starting at second element and ending before last
    {
        insert_loc = i;
        sort_element = A[i];
        while(sort_element < A[insert_loc-1] && insert_loc != 0) //Find location to insert
        {
            //++compare;
            --insert_loc;
        }
        
        for(int w = i; w >= insert_loc; w--) // Move back array to make room for insert element
        {
            A[w] = A[w-1];
        }
        A[insert_loc] = sort_element; // Insert element into correct position
    }
}
void ShellSort::sort(int A[], int size)
{
	int cut = size/3;
	int *ptr = A;
	int remainder = size-(2*cut);
	
	if(size > 2)
	{
		InsertionSort(A,cut);
		InsertionSort(ptr+cut,cut);
		InsertionSort(ptr+(2*cut),remainder);
		InsertionSort(A,size);
	}
	else if(size == 2)
	{
		InsertionSort(A,1);
		InsertionSort(ptr+1,1);
		InsertionSort(A,size);
	}
  /* Complete this function with the implementation of shell sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
 
}