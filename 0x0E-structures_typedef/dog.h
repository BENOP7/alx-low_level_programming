#ifndef DOG_H
#define DOG_H

/**
 * dog - hold dog's informations
 * description: Dog's info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *ower);
void print_dog(struct dog *);

#endif
