/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:48:16 by wchan             #+#    #+#             */
/*   Updated: 2018/07/07 13:48:19 by wchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_eval_expr.h"

int		number(char *expr)
{
	int nbr1;

	while (*expr == ' ')
		expr += 1;
	if (*expr == '(')
	{
		expr += 1;
		nbr1 = eval_expr(expr);
		if (*expr == ')')
			expr += 1;
		return (nbr1);
	}
	return (ft_atoi(expr));
}

int		factors(char *expr)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = number(expr);
	while (*expr)
	{
		while (*expr == ' ')
			expr += 1;
		op = *expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr1);
		expr += 1;
		nbr2 = number(expr);
		if (op == '/')
			nbr1 /= nbr2;
		else if (op == '*')
			nbr1 *= nbr2;
		else
			nbr1 %= nbr2;
	}
	return (nbr1);
}

int		eval_expr(char *expr)
{
	int		nbr1;
	int		nbr2;
	char	op;

	nbr1 = factors(expr);
	while (*expr)
	{
		while (*expr == ' ')
			expr += 1;
		op = *expr;
		if (op != '+' && op != '-')
			return (nbr1);
		expr += 1;
		nbr2 = factors(expr);
		if (op == '+')
			nbr1 += nbr2;
		else
			nbr1 -= nbr2;
	}
	return (nbr1);
}

int		main(int ac, char **av)
{
	int i;
	int result;

	i = 1;
	while (--ac)
	{
		result = eval_expr(av[i]);
		ft_putnbr(result);
		ft_putchar('\n');
		i += 1;
	}
	return (0);
}
