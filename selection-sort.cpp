//============================================================================
// Name        : selection-sort.cpp
// Author      : Akash Kundu
// Date        : 9/17/2016
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void SelectionSort::sort(int A[], int size)	// main entry point
{
	int min_index, temp_index;
	
	for(int i=0;i<size-1;++i)
	{
		min_index=i;
		for(int j = i+1;j<size;++j)
		{
			if(A[j]<A[min_index])
			{
				min_index = j;
			}
		}
		if(min_index != i)
			{
				temp_index = A[i];
				A[i]=A[min_index];
				A[min_index] = temp_index;
			}
	}	
  /* Complete this function with the implementation of selection sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
}
