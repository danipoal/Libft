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

void	strjoin_unit_test(const char *s1, const char *s2, const char *result)
{
	char	*str;

	if (strcmp(str = ft_strjoin(s1, s2), result))
		printf(RED "Strjoin error Orig: '%s' cust: '%s'\n" RESET, result, str);
	else
		printf(GREEN "OK " RESET);
}

void	strjoin_tests()
{
	printf("strjoin test:");
	strjoin_unit_test("Hola ", "que tal?", "Hola que tal?");
	strjoin_unit_test("Ho", "tal?", "Hotal?");
	strjoin_unit_test("", "", "");
	printf("\n");
}

void	advanced_str_tests(void)
{
	strdup_tests();
	strjoin_tests();
}
