#ifndef DOG_H
#define DOG_H

/**
* dog_t - type or struct dog
*/
typedef struct dog dog_t;

/**
* struct dog - struct to store dog info
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Description: this struct stores name age and owner of the dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */