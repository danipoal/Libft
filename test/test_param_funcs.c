#include "test.h"

// Funcion de prueba para pasarle al mapi
char	strmapi_function(unsigned int index, char s)
{
	if (index <= 10000)
		s++;
	return (s);
}

void	strmapi_unit_test(const char *s, char *res)
{
	char	*str;

	if (strcmp(str = ft_strmapi(s, strmapi_function), res))
		printf(RED "Error in strmapi. Orig: '%s' ft: '%s'\n" RESET, str, res);
	else
		printf(GREEN "OK " RESET);
}

void	strmapi_tests()
{
	printf("strmapi tests: ");	
	strmapi_unit_test("aaa", "bbb");
	strmapi_unit_test("a", "b");
	strmapi_unit_test("aa", "bb");
	printf("\n");
}

void	striteri_function(unsigned int index, char *s)
{
	if (index < 10000)
		*s = 'b';
}

void	striteri_unit_test(char *s, char *res)
{
	ft_striteri(s, striteri_function);
	if (strcmp(s, res))
		printf(RED "Error in striteri. Orig: '%s' ft: '%s'\n" RESET, s, res);
	else
		printf(GREEN "OK " RESET);
}

void	striteri_tests()
{
	printf("striteri tests: ");
	char s[] = "aa";
	striteri_unit_test(s, "bb");
	printf("\n");
}

void	fd_tests()
{
	ft_putstr_fd("putnbr_fd test: ft:", 1);
	ft_putnbr_fd(42, 1);
	
	printf(" Orig 42\n");
}
// Funciones que tengan funciones como parametros
void	param_func_tests()
{
	strmapi_tests();
	striteri_tests();
	fd_tests();
}
