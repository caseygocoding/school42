/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:54:57 by wchan             #+#    #+#             */
/*   Updated: 2018/07/04 17:56:26 by wchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int			i;
	t_list		*new_list;
	t_list		*new_element;

	i = 0;
	new_list = 0;
	while (i < ac)
	{
		new_element = ft_create_elem(av[i]);
		new_element->next = new_list;
		new_list = new_element;
		i++;
	}
	return (new_list);
}
