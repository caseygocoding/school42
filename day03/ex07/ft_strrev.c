/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:59:13 by wchan             #+#    #+#             */
/*   Updated: 2018/06/22 23:23:54 by wchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		strlen;
	char	*temp;

	index = 0;
	strlen = 0;
	while (str[index] != 0)
	{
		strlen++;
		index++;
	}
	temp = str;
	while (index >= 0)
	{
		str[strlen - index] = temp[index - 1];
		index--;
	}
	return (str);
}
