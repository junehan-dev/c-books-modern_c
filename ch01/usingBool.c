#include <stdbool.h>
#include <unistd.h>

int		main(void)
{
	int a;

	a = 0;
	//a = 1;
	(a == true) ? write(STDOUT_FILENO, "HI", 2) : write(STDOUT_FILENO, "HO", 2);
	return (0);
}
