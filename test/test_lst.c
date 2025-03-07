#include "test.h"

/**
 * Esta funcion creara un nuevo contenido para la nueva lista
 * Se necesitara hacer un malloc de lo que se quiera guardar.
 *
 * Resta 1 a la primera letra del string.
 */
void	*ft_map(void *s)
{
	char	*str;

	str = ft_strdup((char *) s);
	if (!str)
		return (NULL);
	str[0] = *(char *) s - 1;
	return ((void *) str);	
}

/**
 * Las funciones del siempre sirven para hacer free de las variables
 * Pero comprobar existe un contetn generado con malloc
 */
void	ft_del(void *s)
{
	if (s)
		free(s);
}

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
	t_list	*new_list;	

	printf("lst bonus tests: ");
	node_to_check = *lst;
	list_unit_test(node_to_check->content, "front");
		node_to_check = node_to_check->next;
	list_unit_test(node_to_check->content, "content");

	node_to_check = node_to_check->next;
	list_unit_test(node_to_check->content, "back");

	new_list = ft_lstmap(*lst, ft_map, ft_del);	// LSTMAP test -1 inicial
	list_unit_test(new_list->content, "eront");
	list_unit_test(new_list->next->content, "bontent");
	printf("\n" RESET);
}

void	list_global_test2(t_list **lst)
{
	t_list	*nod;

	printf("lst bonus second tests: ");
	nod = *lst;
	list_unit_test(nod->content, "1");
	list_unit_test(nod->next->content, "2");
	list_unit_test(nod->next->next->content, "3");
	list_unit_test(nod->next->next->next->content, "4");
	
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


	// Vaciamos la lista para volver a crearla
	//if (lst)
		//ft_lstclear(lst, ft_del);	// Esto pasaria ft_del si el content se ha generado con malloc
	ft_lstclear(lst, NULL);
	
	lst = &tmp;
	ft_lstadd_back(lst, ft_lstnew("1"));   // 1 elemento
	ft_lstadd_back(lst, ft_lstnew("2"));   // 1 elemento
	ft_lstadd_back(lst, ft_lstnew("3"));   // 1 elemento
	ft_lstadd_back(lst, ft_lstnew("4"));   // 1 elemento
	list_global_test2(lst);

	printf("El tamano de la lista es %i", ft_lstsize(*lst));
}
