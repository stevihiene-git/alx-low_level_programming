#ifndef CALC_HEADER

#define CALC_HEADER

 

/**

* struct op - Struct op

*

* @op: operator

* @f: Associated function

*/

typedef struct op

{

    char *op;

    int (*f)(int a, int b);

} op_t;

 

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

 

#endif







[9:43 PM] Kelechi Anyaegbu




#include "3-calc.h"

 

/**

* main - program that perfroms simple operations

* @argc: number of arguments

* @argv: array of arguments

*

* Return: Always 0 (Success)

*/

int main(int argc, char *argv[])

{

    int arg1, arg2, result;

    char o;

    int (*func)(int, int);

 

    if (argc != 4)

    {

        printf("Error\n");

        exit(98);

    }

 

    arg1 = atoi(argv[1]);

    arg2 = atoi(argv[3]);

 

    func = get_op_func(argv[2]);

 

    if (!func)

    {

        printf("Error\n");

        exit(99);

    }

 

    o = *argv[2];

 

    if ((o == '/' || o == '%') && arg2 == 0)

    {

        printf("Error\n");

        exit(100);

    }

 

    result = func(arg1, arg2);

 

    printf("%d\n", result);

 

    return (0);

}
