#include "dog.h"
#include <string.h>
#include <stdlib.h>



dog_t *new_dog(char *name, float age, char *owner){
    dog_t *p;

    p = malloc(sizeof(dog_t));

    /*get the lenght of name and owner*/
    /*n =malloc*/
    /*n[i]=name[i]*/

    p->name = strdup(name);
    p->age = age;
    p->owner = strdup(owner);
    return p;
}