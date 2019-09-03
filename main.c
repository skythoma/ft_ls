/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skythoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 22:02:47 by skythoma          #+#    #+#             */
/*   Updated: 2019/07/09 22:02:50 by skythoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
{
    t_ls    *sp;

    if (!(sp = (t_ls *)malloc(sizeof(t_ls))))
        exit(1);
    if (ac < 2)
    {
        sp->ls_dir = 1;
        sp->ls_flags = 0;
        sp->p_flags = NULL;
        if(!(sp->p_dir = (char **)malloc(sizeof(char*) + 1)))
            exit(1);
        if (!(sp->p_dir[0] = (char *)malloc(sizeof(char) + 1)))
            exit(1);
        sp->p_dir[0][0] = '.';
        sp->p_dir[1] = NULL;   
    }
    else
    {
        sp->p_flags = flag_conversion(av, &sp->ls_flags);
        sp->p_dir = get_dir(av, &sp->ls_dir);
    }
    ft_ls(sp);
    return (0);
}