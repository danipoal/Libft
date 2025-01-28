#include "test.h"





void	list_unit_test(char *str, char *res)
{
	if (strcmp(str, res))
		printf(RED "Error lst. Orig: '%s' ft: '%s'\n" RESET, res, str);
	else
		printf(GREEN "OK ");
}

void	list_global_test(t_list **lst)
{
	t_list	*node_to_check;

	printf("lst bonus tests: ");
	node_to_check = *lst;
	list_unit_test(node_to_check->content, "front");
		node_to_check = node_to_check->next;
	list_unit_test(node_to_check->content, "content");

	node_to_check = node_to_check->next;
	list_unit_test(node_to_check->content, "back");
	printf("\n" RESET);

}


void	list_tests()
{
	t_list	**lst;
	t_list	*new;
	t_list	*tmp;

	
	// Anadimos un elemento a la lista recien creada
	tmp = NULL;
	lst = &tmp;
	new = ft_lstnew("content");
	*lst = new; // 1 elemento

	// Anadimos nodos por delante y por detras
	ft_lstadd_front(lst, ft_lstnew("front")); // 2 elemento
	ft_lstadd_back(lst, ft_lstnew("back"));   // 3 elemento

	list_global_test(lst);


	printf("El tamano de la lista es %i", ft_lstsize(*lst));
}
