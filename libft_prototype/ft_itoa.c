#include "libft.h"

char *ft_itoaneg(unsigned int n){
	char			*str;
	int				digits;
	unsigned int	n2;

	digits = 1;
	n2 = n;
	while (n2 >= 10){
		n2 /= 10;
		digits++;
	}
	digits++;
	str = (char *) malloc ((digits + 2) * sizeof(int));
	if (str) {
		str[0] = '-';
		str[digits] = '\0';
		while (--digits != 0){
			str[digits] = (n % 10) + '0';
			n /= 10;
		}
		return (str);
	}
	return (0);
}

char *ft_itoa(int n){
	char	*str;
	int		digits;
	int		n2;

	if (n < 0)
		return (ft_itoaneg((unsigned int) (n * -1)));
	digits = 0;
	n2 = n;
	while (n2 >= 10){
		n2 /= 10;
		digits++;
	}
	digits++;
	str = (char *) malloc ((digits + 1) * sizeof(int));
	if (str) {
		str[digits] = '\0';
		while (--digits != -1){
			str[digits] = (n % 10) + '0';
			n /= 10;
		}
		return (str);
	}
	return (0);
}
