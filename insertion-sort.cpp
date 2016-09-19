//============================================================================
// Name        : insertion-sort.cpp
// Author      : Austin Langley
// Date        : 9/15/2016
// Copyright   :
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void InsertionSort::sort(int A[], int size)				// main entry point
{

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

  /* Complete this function with the implementation of insertion sort algorithm
  Record number of comparisons in variable num_cmps of class Sort
  */
}
