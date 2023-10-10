#ifndef DOG_H
#define DOG_H
/**
 * struct dog -Dog data.
 * @name: Name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Desctiption: a structure with the name, age and owner of a dog.
**/
#typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
