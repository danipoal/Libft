#ifndef TEST_H
# define TEST_H

# define RESET "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"

# include "../libft.h"
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

// Number tests
void	atoi_tests();


// String and char tests
int	check(int i1, int i2);
void	char_tests(void);
void	strlen_test(void);
void	strlcpy_unit_test(const char *src, size_t size);
void	str_tests(void);
void	advanced_str_tests(void);

// Memory tests
void	memset_unit_test(void * s, int c, size_t n);
void	mem_tests(void);

//
void	param_func_tests();

#endif
