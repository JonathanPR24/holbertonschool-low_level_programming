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

#endif /* DOG_H */
