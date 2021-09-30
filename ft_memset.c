#include "libft.h"
void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)dest;
	while (i < n)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
