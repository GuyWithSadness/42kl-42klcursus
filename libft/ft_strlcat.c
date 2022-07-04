#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size){
	size_t	i;
	size_t	destlen;
	size_t	srclen;
	int		j;


	destlen = ft_strlen(dest);
	srclen = ft_strlen((char *) src);
	if (size == 0 || (destlen > size))
		return (srclen + size);
	j = 0;
	i = destlen;
	while (i < (size - 1) || src[j] == '\0'){
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
