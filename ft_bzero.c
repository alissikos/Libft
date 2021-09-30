#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)dest;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
