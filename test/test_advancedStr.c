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

void	substr_unit_test(const char *s, unsigned int start, size_t len, char *result)
{
	char	*str;

	if (strcmp(str = ft_substr(s, start, len), result))
		printf(RED "Substr error Orig: '%s' cust: '%s'\n" RESET, result, str);
	else
		printf(GREEN "OK " RESET);
}

void	substr_tests()
{

	printf("substr test:");
	substr_unit_test("Hola", 2, 2, "la");
	substr_unit_test("Pepsi", 3, 2, "si");
	substr_unit_test(" ", 0, 1, " ");
	substr_unit_test("tripouille", 0, 42000, "tripouille");
	printf("\n");
}

void	strtrim_unit_test(const char *s1, const char *set, const char *res)
{
	char	*str;

	if (strcmp(str = ft_strtrim(s1, set), res))
			printf(RED "Strtrim error Orig: '%s' cust: '%s'\n" RESET, res, str);
	else
		printf(GREEN "OK " RESET);
}

void	strtrim_tests()
{
	printf("strtrim test:");
	strtrim_unit_test("          ", " ", "");
	strtrim_unit_test("Hola", "la", "Ho");
	strtrim_unit_test("Hola", "Ho", "la");
	strtrim_unit_test("Hola", "oH", "la");
	strtrim_unit_test("JjojsJj", "Jj", "ojs");
	strtrim_unit_test("lorem ipsum dolor sit amet", "l", "orem ipsum dolor sit amet");
	
	printf("\n");
}


void	advanced_str_tests(void)
{
	strdup_tests();
	strjoin_tests();
	substr_tests();
	strtrim_tests();
}
