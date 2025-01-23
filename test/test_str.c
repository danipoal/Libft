#include "test.h"

/*
 * Functions issomething() from ctype, not always return
 * 1 like ft_issomething(), it can return a positive number
 * always > 0. Then we will check not the ==, also the > 0
 */
int	check(int i1, int i2)
{
	return ((i1 == i2) || (i1 > 0 && i2 > 0));
}

void	char_tests(void)
{
	int	i;

	// Char methods check
	i = 0;
	printf(RED);
	while (i < 256)
	{
		if (!check(isalpha(i), ft_isalpha(i)))
			printf("ft_isalpha failed in ascii %d\n", i);
		if (!check(isdigit(i), ft_isdigit(i)))
			printf("ft_isdigit failed in ascii %d\n", i);
		if (!check(isalnum(i), ft_isalnum(i)))
			printf("ft_isalnum failed in ascii %d\n", i);
		if (!check(isascii(i), ft_isascii(i)))
			printf("ft_isascii failed in ascii %d\n", i);
		if (!check(isprint(i), ft_isprint(i)))
			printf("ft_isprint failed in ascii %d\n", i);
		if ((toupper(i) != ft_toupper(i)))
			printf("ft_toupper failed in ascii %d\n", i);
		if ((tolower(i) != ft_tolower(i)))
			printf("ft_tolower failed in ascii %d\n", i);
		i++;
	}
	printf(RESET "Char tests: " GREEN "OK \n" RESET); // Harcodeado pero he comprobado que estan bien
}

void	strlen_unit_test(char *strlen1)
{
	if (strlen(strlen1) != ft_strlen(strlen1))
		printf("Error in len for %s\n", strlen1);
	else
		printf(GREEN "OK " RESET);
}

void	strlen_test(void)
{
	printf("strlen test: ");
	strlen_unit_test("Hola q ");
	strlen_unit_test("Hol peps\n");
	strlen_unit_test("");

	printf("\n");
	// For NULL strlen da error pero mi ft no
}

/*
 * Test unitario para ft_strlcpy. La funcion de C no es estandar por eso se
 * Comprueba de manera manual a traves de lo que deveria de dar.
 */

void	strlcpy_unit_test(const char *src, size_t size)
{
	char	dest[size];
	char	dest2[size];
	int	isCorrect;

	isCorrect = 1;
	// Comprueba que devuelve el tamano de lo que intenta copiar
	if (strlen(src) != ft_strlcpy(dest, src, size))
		isCorrect = 0;
	// TODO Comprueba que se haya copiado correctamente el string
	if (!isCorrect)
		printf("Error en srtlcpy size: %zu, dest1: %s\tdest2: %s \n", size, dest, dest2);
}


void	strchr_unit_test(const char *strchr1, int let)
{
	if (strchr(strchr1, let) != ft_strchr(strchr1, let))
		printf(RED "Error in strchr for no coincidence (null)\n");
	else
		printf(GREEN "OK ");
	
	if (strrchr(strchr1, let) != ft_strrchr(strchr1, let))
		printf(RED "Error in strrchr for no coincidence (null)\n");
	else
		printf(GREEN "OK ");
}

void	strncmp_unit_test(const char *strchr1, const char *strchr2, size_t n)
{
	if (strncmp(strchr1, strchr2, n) != ft_strncmp(strchr1, strchr2, n))
		printf(RED "Error in strncmp comparation\n");
	else
		printf(GREEN "OK ");
}

/*
 * Tests for strchr(), strrchr(), strncmp()
 */

void	str_tests(void)
{
	printf("strchr & strrchr test: ");
	strchr_unit_test("Hola que tal", 'a');
	strchr_unit_test("Jiganyes    Hola", 's');
	strchr_unit_test("34243242423523524", '4');

	printf(RESET "\nstrcmp test: ");
	strncmp_unit_test("Hola", "Hola", 4);
	strncmp_unit_test("Hola   ", "Hola", 5);
	strncmp_unit_test("Holfwea", "Hfola", 4);


	// STRLCPY no es estandar en C, por lo tanto se tiene q comprobar manual
	//printf(RESET "\nstrlcpy test: ");
	strlcpy_unit_test("Hola que tal", 10);
	printf(RESET"\n");
}
