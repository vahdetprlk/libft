/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 00:56:29 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/30 19:30:26 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 	del(void *element)
	{
		free(element);
	} */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* 
int main()
{
	char str[] = "ahmet";
	t_list *lst;
	lst = ft_lstnew((void *)str);
	printf("%s\n",lst->content);

	lst = ft_lstnew((void *)"veli");
	printf("%s\n",lst->content);


	ft_lstadd_front(&lst, ft_lstnew((void *)"meheme"));
	printf("%s\n",lst->content);


	printf("%s\n", lst->next->content);

	ft_lstadd_front(&lst, ft_lstnew((void *)"mirac"));
	printf("%s\n",lst->content);
	printf("%s\n",lst->next->content);
	printf("%s\n",lst->next->next->content);

	printf("%d\n", ft_lstsize(lst));

	printf("%s\n", ft_lstlast(lst)->content);

	ft_lstadd_back(&lst, ft_lstnew((void *)"pancar"));

	printf("%s\n", ft_lstlast(lst)->content);
	
 	while (lst->content != NULL)
	{	

		printf("%s\n", lst->content);
		lst = lst->next;
		if (!lst)
			break;
	} 

	char *ali = ft_strdup(lst->content);
	printf("%s\n", ali);

	ft_lstdelone(lst->next, del);
	ali = ft_strdup(lst->content);
	printf("%s", ali);
}
  */