#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	k;

	k = c;
	s = (char *)str;
	i = 0;
	if (k == '\0')
	{
		while (s[i] != '\0')
			i++;
		return (&s[i]);
	}
	while ((s[i] != '\0') && (s[i] != k))
		i++;
	if (s[i] == '\0')
		return (NULL);
	return (&s[i]);
}
