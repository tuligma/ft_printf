#include "ft_printf.h"

int	main(void)
{
	int	count;
	
	
	count = ft_printf("hello %p\n", &count);
	printf("%d\n\n", count);


	count = printf("hello %p\n", &count);
	printf("%d\n\n", count);
	return (0);
}