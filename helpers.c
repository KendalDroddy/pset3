/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    //Return false if value is negative
    while(value < 0)
    {
        return false;
    }
    
    /*Perform linear search for positive value
    for(int i = 0; i < n; i++)
    {
        if(value == values[i])
        {
            return true;
            break;
        }
        if(i == n)
        {
            return false;
        }
    }
    */
    
    //declare search variables
    int high = n - 1;
    int low = 0;
    
    //Perform binary search
    while(low <= high)
    {
        //declare search variables
        int mid = (high + low) / 2;
        
        //perform search
        if(values[mid] == value)
        {
            return true;
        }
            
        else if(values[mid] < value)
        {
            low = mid + 1;
        }
            
        else if(values[mid] > value)
        {
            high = mid - 1;
        }
        else
        {
            break;
        }
    }
    
    return false;
}

/**
 *Bubble Sorts array of n values.
*/

void sort(int values[], int n)
{
    //Outer loop iterates once for every value in the array
    for(int i = 0; i < n; i++)
    {
        //Inner loop - one pass bubbles largest number to the top
        for(int i = 0; i < n - 1; i++)
        {
            if(values[i] > values[i + 1])
            {
                int temp_int = values[i + 1];
                values[i + 1] = values[i];
                values[i] = temp_int;
            }
        }
    }
    return;
}


