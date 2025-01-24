#include "test.h"

void	strdup_unit_test(const char *s)
{
	char	*s1;
	char	*s2;

	if (strcmp(s1 = strdup(s), s2 = ft_strdup(s)))
		printf(RED "Strdup error in char:'%s' ----- Orig: '%s' cust: '%s'\n" RESET, s, s1, s2);
	else
		printf(GREEN "OK " RESET);
}

void	strdup_tests(void)
{
	printf("strdup test: ");
	strdup_unit_test("Hola que tal");
	strdup_unit_test("");
	strdup_unit_test("ds ewwf wefHola que tal");
	printf("\n");
}


void	advanced_str_tests(void)
{
	strdup_tests();
}
