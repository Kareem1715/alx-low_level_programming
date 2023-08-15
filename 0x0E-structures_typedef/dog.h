#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describe the dog
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: owner of the dog.
 *
 * Description: information about struct dog.
 */
struct dog /* Task 0 */
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t; /* Task 3 */

/* Protoypes of all functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int strlength(char *str);
char *strcopy(char *old, char *new);
void free_dog(dog_t *d);

#endif
