#include "test.h"

// Comparar dos *stacks de memoria
/*void	memset_unit_test(void * s, int c, size_t n)
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
*/

/**
 * We will use memcmp to compare the original calloc with the custom
 * @params nmemb is the number of elements and size are the bytes
 * memcmp compare n bytes, so dont surpass the bytes 
 */
void	calloc_unit_test(size_t nmemb, size_t size)
{
	void	*s1;
	void	*s2;

	if (memcmp(s1 = calloc(nmemb, size), s2 = ft_calloc(nmemb, size), nmemb * size))
		printf(RED "Error in calloc for array of %li items, size: %li\n" RESET, nmemb, size);
	else
		printf(GREEN "OK " RESET);
}



/*
 * Tests for memchr(), memset(), calloc()
 */

void	mem_tests(void)
{
	// memset test
	//char s1[] = "Hola"; // No es aconsejable usar strings literales, por eso guardamos.
	//memset_unit_test(s1, 'x', 5); // Llenar de 0 la memoria que esta ocupada con "hola\0"
	//memset_unit_test();

	printf("calloc test: ");
	calloc_unit_test(4, 1);
	calloc_unit_test(5, 2);
	calloc_unit_test(0, 0);
	calloc_unit_test(2, 4);

	printf("\n");
}
