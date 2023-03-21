/**
 * struct dog - structure
 * @name: name
 * @age: age
 * @owner: owner
 *Description: Defines metadata about the dog and type of dog's struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_;
void init_dog(struct dog *d, char *name, float age, char *owner);
