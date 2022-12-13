#include "function_pointers.h"
#include <stddef.h>
/**
 * @brief 
 * 
 */

    void array_iterator(int *array, size_t size, void (*)action(int))
{
    int count;
    /* a loop that goes through each element of the array*/
    for(count = 0; count < size; count++)
    {
        /*print all array elements*/
        (*action)(array[count]);
    }
}