# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_concat_params.c                                 :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wchan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/28 21:06:45 by wchan             #+#    #+#              #
/*   Updated: 2018/06/28 21:10:12 by wchan            ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int		ft_strlen_total(int argc, char **argv)
{
	int count;
	int i;

	i = 1;
	count = 0;
	while (i < argc)
	{
		count = count + ft_strlen(argv[i]);
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*r;
	int		total;
	int		i;
	int		y;
	int		c;

	total = ft_strlen_total(argc, argv) + argc;
	r = (char*)malloc(sizeof(*r) * total);
	i = 1;
	c = 0;
	while (i < argc)
	{
		y = 0;
		while (argv[i][y] != '\0')
		{
			r[c] = argv[i][y];
			c++;
			y++;
		}
		r[c] = '\n';
		c++;
		i++;
	}
	r[c - 1] = '\0';
	return (r);
}
