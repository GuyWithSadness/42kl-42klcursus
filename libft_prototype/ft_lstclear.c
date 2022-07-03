#include "libft.h"
#include "ft_lstdelone.c"

void	ft_lstclear(t_list **lst, void (*del)(void*)){
	t_list	*current;
	t_list	*temp;

	if (*lst && del) {
		current = *lst;
		while (current) {
			temp = current->next;
			ft_lstdelone(current, del);
			current = temp;
		}
		free(temp);
		*lst = 0;
	}
}
