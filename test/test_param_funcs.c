#include "test.h"




// Funcion de prueba para pasarle al mapi
char	strmapi_function(unsigned int index, char s)
{
	if (index >= 0)
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

}


// Funciones que tengan funciones como parametros
void	param_func_tests()
{
	strmapi_tests();


}
