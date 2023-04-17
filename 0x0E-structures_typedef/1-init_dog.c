#include <stdlib.h>
	#include "dog.h"


	/**
	 * init_dog - A function to initialize the variable
	 * @d: pointer showing addreess of init_dog
	 * @name: name
	 * @age: agee
	 * @owner: owner
	 */
	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

