#include "main.h"
/**
 * separator - checks if character is a separator
 * @c: character to be checked
 * Return: if separator returns 1. otherwise returns 0;
 */
int separator(char c)
{
	/*Declaring condition switch*/
	switch (c)
	{
		case ' ':
		case '\t':
		case '\n':
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
			return (1);
		default:
			return (0);
	}
}
