#include <stdio.h>
/**
* print_name - prints name with function pointer
*@name: the name
*@f: the function to be callled
*Return: name
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
