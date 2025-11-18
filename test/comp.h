#ifndef COMP_H
#define COMP_H
/**
 * struct comp - Struct comp
 *
 * @cp: The comparator
 * @f: The function associated
 */
typedef struct comp
{
	char *cp;
	int (*f)(int, int);
} comp_t;

int is_less(int a, int b);
int is_greater(int a, int b);
int is_equal(int a, int b);
int is_diff(int a, int b);

int (*get_cmp_func(char *s))(int, int);

#endif
