#include <stdio.h>
/**
 * pre_main - function that prints a message before the main function is executed
 *
 * Return: always 0
 */
void __attribute__((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
