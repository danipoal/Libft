/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danalvar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:49:13 by danalvar          #+#    #+#             */
/*   Updated: 2025/01/17 15:45:30 by danalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

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
}

void	strlen_test(void)
{
	char	strlen1[] = "Hoola q ";
	char	strlen2[] = "Hol peps\n";
	char	*strlen3 = NULL;

	if (strlen(strlen1) != ft_strlen(strlen1))
		printf("Error in len for %s\n", strlen1);
	if (strlen(strlen2) != ft_strlen(strlen2))
		printf("Error in len for %s\n", strlen2);
	if (ft_strlen(strlen3))
		printf("Error in len for NULL\n");
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

/*
 * Tests for strchr(), strrchr(), strncmp()
 */

void	str_tests(void)
{
	int	let = 'a';
	const char	strchr1[] = "Hol peps\n";
	const char	strchr2[] = "oa";

	if (strchr(strchr1, let) != ft_strchr(strchr1, let))
		printf("Error in strchr for no coincidence (null)\n");
	if (strchr(strchr2, let) != ft_strchr(strchr2, let))
		printf("Error in strchr for coincidence\n");
	if (strrchr(strchr1, let) != ft_strrchr(strchr1, let))
		printf("Error in strrchr for no coincidence (null)\n");
	if (strrchr(strchr2, let) != ft_strrchr(strchr2, let))
		printf("Error in strrchr for coincidence\n");
	if (strncmp(strchr1, strchr2, 1) != ft_strncmp(strchr1, strchr2, 1))
		printf("Error in strncmp comparation\n");
	strlcpy_unit_test("Hola que tal", 10);

}

void	atoi_tests()
{
	char	str[17];

	strcpy(str,"   -+--+32424f34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str," -a");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "22");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "32525253");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "fd");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str, "");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str,"   34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
	strcpy(str,"---34");
	if (atoi(str) != ft_atoi(str))
		printf("Err atoi for %s orig: %i ft: %i\n", str, atoi(str), ft_atoi(str));
}


// Comparar dos *stacks de memoria
void	memset_unit_test(void * s, int c, size_t n)
{
	int	i;
	char	j;
	void	*s2 = &i;
	void	*s3 = &j;

	i = 32;			// Iniciamos i a algo aleatorio
	s2 = memcpy(s2, s, n);  // Le copiamos a i lo que viene en s para que sea lo mismo
	j = 'a';
	s3 = memcpy(s3, s, n);

	// Comprobar valores antes de ser modificados
	printf("Memset orig:%d ft: %d\n", *(int *) s, *(int *) s2);
	printf("Memset orig:%c ft: %c\n", *(char *) s, *(char *) s2);

	// TODO Para hacer la comparacion de memoria tiene que usarse memcmp, ya que al no
	// 	Terminar con un '\0' hay que saber cuantos bytes comparar, y hacerlo en un
	//	parseo apto n veces. 
	if (*ft_memset(s2, c, n) != *memset(s, c, n))
		printf("Error memset for int\n");
	else
		printf("Memset correct for int\n");
	// Comprobar valores despues de ser modificados
	printf("Memset orig:%d ft: %d\n", *(int *) s, *(int *) s2);
	printf("Memset orig:%c ft: %c\n", *(char *) s, *(char *) s2);
	
	if (*ft_memset(s3, c, n) != *s)
		printf("Error memset for char\n");
	else
		printf("Memset correct for char\n");

	printf("Memset orig:%c ft: %c\n", *(char *) s, *(char *) s3);
}


/*
 * Tests for memchr(), memset()
 */

void	mem_tests(void)
{
	// memset test
	char s1[] = "Hola"; // No es aconsejable usar strings literales, por eso guardamos.
	memset_unit_test(s1, 'x', 5); // Llenar de 0 la memoria que esta ocupada con "hola\0"
	//memset_unit_test();
}


int	main(void)
{
	char_tests();
	strlen_test();
	str_tests();
	mem_tests();
	atoi_tests();
	return (0);
}
