#include <stdlib.h>
#include "dog.h"

/**
 * @brief 
 * 
 */

    void free_dog(dog_t *d)
{
    free(d->name);
    free(d->owner);
    free(d); 
}