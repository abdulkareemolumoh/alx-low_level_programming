#include <unistd.h>

/**
 * Writes a character to standard output.
 *
 * @param c The character to write.
 * @return  The character written or -1 on error.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

