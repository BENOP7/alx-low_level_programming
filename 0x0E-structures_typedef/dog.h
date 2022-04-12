#ifndef DOG_H
#define DOG_H

/**
 * struct dog - hold dog's informations
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
dog_t *new_dog(char *, float, char *);
char *_strcpy(char *, char *);
int _strlen(char *);
void free_dog(dog_t *);

#endif
