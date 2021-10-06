#include "libft.h"

int	main(void)
{
	char *s1 = "abc";
	char *s2 = "a";
	// char *s1 = "";
	// char *s2 = "AAAAAA";
	// printf("%d\n",s1[2] - s2[2]);
	// printf("memcmp %d\n\n", memcmp(s1, s2, 8));
	// printf("ft_memcmp %d\n", ft_memcmp(s1, s2, 8));


	//printf("%c\n", toupper(122));

	printf("%lu\n", strlcat(s2, s1, 1));
	printf("%s\n", s2);

	// printf("\n%lu\n", ft_strlcat(s2, s1, 3));

	return (0);
}