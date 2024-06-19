#include <stdio.h>
#include "includes/ft_printf_bonus.h"
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
    // count = ft_printf("ft_printf --> [42%2.5s42]\n", str);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [42%2.5s42]\n", str);
    // printf("count = %d\n\n", count);

    // printf("Pointer:\n");
    // count = ft_printf("ft_printf --> [%p]\n", (void *)(&count));
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%p]\n", (void *)(&count));
    // printf("count = %d\n\n", count);

    // printf("Decimal:\n");
    // count = ft_printf("ft_printf --> [%+018d]\n", -533848891);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%+018d]\n", -533848891);
    // printf("count = %d\n\n", count);

    // printf("Integer:\n");
    // count = ft_printf("ft_printf --> [%34.32x]\n", 0);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%-5i]\n", 0);
    //  printf("count = %d\n\n", count);

    // printf("Unsigned:\n");
    // count = ft_printf("ft_printf --> [%-5.0u]\n", 0);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("   printf --> [%-5.0u]\n", 0);
    //  printf("count = %d\n\n", count);

    printf("Lowercase hex:\n");
    count = ft_printf("ft_printf --> [%x]\n", 94729282577984);
    printf("count = %d\n", count);
    ft_printf("------------------------\n");
    count = printf("   printf --> [%x]\n", 94729282577984);
    printf("count = %d\n\n", count);

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

    // printf("\n");
    // printf("Char:\n");
    // count = ft_printf("%  d", -1);
    // printf("count = %d\n", count);
    // ft_printf("------------------------\n");
    // count = printf("%#34.32x", 94729282577984);
    // printf("count = %d\n\n", count);


	return (0);
}