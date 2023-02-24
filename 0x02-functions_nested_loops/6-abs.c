#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @abVal: integer input
 * Return: absolute value of ab
 */
int _abs(int abVal)
{
	return (abVal * ((abVal > 0) - (abVal < 0)));
}
