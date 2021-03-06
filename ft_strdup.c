#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (str[len] != '\0')
		len++;
	dst = (char *)malloc(sizeof(*dst) * (len + 1));
	if (dst == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
