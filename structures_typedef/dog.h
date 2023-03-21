#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog with a name, age, and owner
 * @name: the name of the dog (a string)
 * @age: the age of the dog (a float)
 * @owner: the name of the owner (a string)
 *
 * Description: This structure represents a dog with a name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
