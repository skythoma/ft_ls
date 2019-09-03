/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skythoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:05:41 by skythoma          #+#    #+#             */
/*   Updated: 2019/07/08 14:16:17 by skythoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_LS_H
# define FT_LS_H

#include <unistd.h>
#include <dirent.h>
#include "libft/libft.h"
#include <stdbool.h>
#include <sys/types.h>
#include <sys/xattr.h>
#include <stdlib.h>
#include <time.h>


# define L(x) (x == 'l')
# define R(x) (x == 'r')
# define A(x) (x == 'a')
# define T(x) (x == 't')
# define L_ISH(fp, fpu, x) (L(fp[x]) ? fpu = 1 : 0)
# define BIG_R(x) (x == 'R')
# define OPEN_DIR(dir, fol, x) (dir = opendir(file[x]))
# define NOT_EQUAL(str, c) (str != c)
# define READ_DIR(stream, dir) ((stream = readdir(ditr)) != NULL)

typedef struct s_flags
{
    bool    l_long;
} them_flags;


typedef struct s_ls
{
    them_flags   *tp;
    int ls_dir;
    int ls_flags;
    char    *p_flags;
    char    **p_dir;
} t_ls;

int     check_the_flags(t_ls *sp);
them_flags      *index_flag(t_ls *sp);


#endif