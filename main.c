#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int count;
	// char	*str = (void *)0;

	// printf("\n");
    // printf("Char:\n");
    // count = ft_printf("ft_printf --> [%c]\n", 128);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%c]\n", 128);
    // printf("count = %d\n\n", count);

    // printf("String:\n");
    // count = ft_printf("ft_printf --> [%s]\n", str);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%s]\n", str);
    // printf("count = %d\n\n", count);

    // printf("Pointer:\n");
    // count = ft_printf("ft_printf --> [%p]\n", (void *)(&count));
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%p]\n", (void *)(&count));
    // printf("count = %d\n\n", count);

    // printf("Decimal:\n");
    // count = ft_printf("ft_printf --> [%d]\n", 12345);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%d]\n", 12345);
    // printf("count = %d\n\n", count);

    // printf("Integer:\n");
    // count = ft_printf("ft_printf --> [%i]\n", -12345);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%i]\n", -12345);
    //  printf("count = %d\n\n", count);

    // printf("Unsigned:\n");
    // count = ft_printf("ft_printf --> [%u]\n", 12345);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%u]\n", 12345);
    //  printf("count = %d\n\n", count);

    // printf("Lowercase hex:\n");
    // count = ft_printf("ft_printf --> [%x]\n", 255);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%x]\n", 255);
    // printf("count = %d\n\n", count);

    // printf("Uppercase hex:\n");
    // count = ft_printf("ft_printf --> [%X]\n", 255);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%X]\n", 255);
    // printf("count = %d\n\n", count);

    // printf("Percent sign:\n");
    // count = ft_printf("ft_printf --> [%%]\n");
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%%]\n");
    // printf("count = %d\n\n", count);

    // printf("LONG_MIN and LONG_MAX:\n");
    // count = ft_printf("ft_printf --> [%p] [%p]\n", (void *)LONG_MIN, (void *)LONG_MAX);
    // printf("count = %d\n", count);
    // printf("------------------------\n");
    // count = printf("   printf --> [%p] [%p]\n", (void *)LONG_MIN, (void *)LONG_MAX);
    // printf("count = %d\n\n", count);

    // printf("ULONG_MAX and -ULONG_MAX:\n");
    // count = ft_printf("ft_printf --> [%p] [%p]\n", (void *)ULONG_MAX, (void *)(-ULONG_MAX));
    // printf("count = %d\n", count);
    // printf("------------------------\n");
    // count = printf("   printf --> [%p] [%p]\n", (void *)ULONG_MAX, (void *)(-ULONG_MAX));
    // printf("count = %d\n\n", count);

    printf("\n");
    printf("Char:\n");
    count = ft_printf("%  d", -1);
    printf("count = %d\n", count);
    ft_printf("------------------------\n");
    count =printf("%  d", -1);
    printf("count = %d\n\n", count);


	return (0);
}