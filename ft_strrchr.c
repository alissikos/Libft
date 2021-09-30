#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;
	int		i;
	char	k;

	k = c;
	s = (char *)str;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == k)
			return (&s[i]);
		i--;
	}
	return (NULL);
}
