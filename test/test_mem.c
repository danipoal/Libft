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

void	memcmp_unit_test(const char *s1, const char *s2, size_t size)
{
	int	o;
	int	c;

	o = memcmp(s1, s2, size); 
	c = ft_memcmp(s1, s2, size); 
	if (o != c)
		printf(RED "Error in memcmp for '%s' -- '%s'. Results originial: %i Custom : %i\n" RESET, s1, s2, o, c);
	else
		printf(GREEN "OK " RESET);
}

void	memmove_unit_test(const void *src, size_t n)
{
	char	dst1[100];
	char	dst2[100];

	if (memcmp(memmove(dst1, src, n), ft_memmove(dst2, src, n), n))
		printf(RED "Error in memmove for '%p' -- %li. Results originial: '%s' Custom : '%s'\n" RESET, src, n, dst1, dst2);
	else
		printf(GREEN "OK " RESET);
}


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

	printf("memcmp test: ");
	memcmp_unit_test("fdsfasd", "sdd", 4); 
	memcmp_unit_test("a", "a", 1); 
	memcmp_unit_test("", "", 1);
	memcmp_unit_test("aaaa", "aaac", 4); 
	printf("\n");

	printf("memmove test: ");
	memmove_unit_test("a", 1);
	memmove_unit_test("asd", 1);
	memmove_unit_test("asdada", 4);
	printf("\n");

	printf("calloc test: ");
	calloc_unit_test(4, 1);
	calloc_unit_test(5, 2);
	calloc_unit_test(0, 0);
	calloc_unit_test(2, 4);

	printf("\n");
}
