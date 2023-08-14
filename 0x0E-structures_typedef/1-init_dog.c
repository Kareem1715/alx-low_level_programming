#include "dog.h"

/**
 * init_dog: describe the dog
 * 
 * @d: my_dog variable.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner of the dog.
 *
 * Description: information about struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

    if (d != 0)
    {
        d -> name = name;
        d -> owner = owner;
        d -> age = age;        
    }

    
}
