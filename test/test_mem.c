#include "test.h"

void	memset_unit_test(void * s, int c, size_t n, const char *res)
{
	char	*str;

	str = strdup(s);
	if (!str)
		return ;
	str = ft_memset(str, c, n);
	if (memcmp(str, res, n))
		printf(RED "Error memset. Orig: '%s' ft: '%s'\n" RESET, res, str);
	else
		printf(GREEN "OK " RESET);
}

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

void	bzero_unit_test(char *s, size_t n)
{
	char	*str;
	char	*res;

	str = strdup(s);
	if (!str)
		return ;
	ft_bzero(str, n);
	res = calloc(n , sizeof(char));
	if (memcmp(str, res, n))
		printf(RED "Error bzero n:%lu Orig: '%s' ft: '%s'\n" RESET, n, res, str);
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
	printf("bzero tests: ");
	bzero_unit_test("Hola", 4);
	bzero_unit_test("aaaaa", 5);
	bzero_unit_test("a", 1);
	printf("\n" RESET);


	printf("memset tests: ");
	memset_unit_test("Hola", '\0', 4, "\0\0\0\0"); // Llenar de 0 la memoria que esta ocupada con "hola\0"
	memset_unit_test("Hola", 0, 5, "\0\0\0\0\0");
	memset_unit_test("Hola", 'x', 4, "xxxx");
	printf("\n" RESET);

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
