#include "libft.h"

size_t	ft_strlcat(char *dest, const char * src, size_t size)
{
	int	d;
	int	s;
	size_t dest_t;
	size_t src_t;
	size_t dps;


	d = ft_strlen(dest);
	s = ft_strlen(src);
	dest_t = d;
	src_t = 0;
	dps = d + s;

	if (dest_t > size)
	{
		dest_t = 0;
		while (dest_t < size - 1)
		{
			dest_t ++;
		}
		dest[size] = '\0';

	} else if (dps < size)
	{
			while (dest_t < dps)
			{
				dest[dest_t] = src[src_t];
				src_t ++;
				dest_t ++;
			}
			dest[dps] = '\0';

	}
	else
	{
			while (dest_t < size - 1)
			{
				dest[dest_t] = src[src_t];
				src_t ++;
				dest_t ++;
			}
			dest[size] = '\0';
	}

	return (dps);
}
