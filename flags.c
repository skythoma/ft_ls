/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skythoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 14:38:02 by skythoma          #+#    #+#             */
/*   Updated: 2019/07/19 15:50:54 by skythoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	check_the_flags(t_ls *sp)
{
	int check;
	int x;

	check = 0;
	x = 0;
	while (x < sp->ls_flags)
	{
		L(sp->p_flags[x]) ? check += 1 : 0;
		sp->p_flags[x] == '1' ? check += 1 : 0;
		x++;
	}
	if (check != sp->ls_flags)
		return (-1);
	return (1);
}

them_flags	*index_flag(t_ls *sp)
{
	int x;

	x = 0;
	if (!(sp->tp = (them_flags*)malloc(sizeof(them_flags))))
		exit(1);
	while (x < sp->ls_flags)
	{
		L_ISH(sp->p_flags, sp->tp->l_long, x);
		if (check_the_flags(sp) == -1)
		{
			ft_putstr("ls: illegal option cuh\n");
			exit(1);
		}
		x++;
	}
	return (sp->tp);
}
