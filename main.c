#include <stdio.h>
#include "pushswap.h"

// print stack
void printList(t_list *head)
{
	t_list *tmp = head;

	while(tmp != NULL){
		printf(" %d|%d\\ ", tmp->content, tmp->index);
		tmp = tmp->next;
	}
	printf("\n");
}

// create stack a and add number
t_list	*ft_init(t_list *lst, char **ag)
{
	t_list	*tmp;
	t_list  *res;
	int i = 1;
	int j = 0;

	res = ft_lstnew(ft_atoi(ag[i]));
	res->index = j;
	i++;
	while (ag[i])
	{
		tmp = ft_lstnew(ft_atoi(ag[i]));
		ft_lstadd_back(&res, tmp);
		j++;
		tmp->index = j;
		i++;
	}
	return (res);
}

int main(int ac, char **ag)
{
	t_swap  *tab;

	tab = malloc(sizeof(t_swap));
	tab->stack_a = NULL;
	tab->stack_b = NULL;
	tab->stack_a = ft_init(tab->stack_a, ag);
	tab->stack_tmp = ft_init(tab->stack_tmp, ag);



	ft_sortindex(tab);
	printList(tab->stack_a);
	ft_index_sorted(tab);
	printList(tab->stack_a);
	sorting(tab);






// print res ---------------------------------
	printList(tab->stack_a);
	// int i =0;
	// int len = ft_lstsize(tab->stack_a);
	// while(len--)
	// {
	// 	printf("%d, ", tab->sorted[i]);
	// 	i++;
	// }
	// printf("\n");
	printf("|||| %d |||| \n", tab->ope);
}

//gcc main.c src/operations.c src/sort.c src/utils.c libft/libft.a