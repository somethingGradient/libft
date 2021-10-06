#include "libft.h"

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
	char	str[] = "b1ohlellof";
	char	dest[10];

	int a = 35;
	printf("%c\n", (char)a);

	
	ft_memccpy(dest, str, 1, 9);

	printf("here %s\n", dest);

printf("\n");

	memccpy(dest, str, 1, 9);

	printf("here2 %s\n", dest);


	return (0);
}