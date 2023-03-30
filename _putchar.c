#include <unistd.h>

/**
<<<<<<< HEAD
* _putchar - writes the character c to stdout
* @c: The char
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
			return (write(1, &c, 1));
}

=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> 3f20aaa8ec7d1b37b387481119af358db19d4927
