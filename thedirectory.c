#include "ft_ls.h"

int count_dir(char **av)
{
    int x;
    int ret;

    x = 1;
    ret = 0;
    while (av[x])
        if (NOT_EQUAL(av[x++][0], '-'))
            ret++;
    return (ret);
}

char    **get_dir(char **av, int *ls_dirs)
{
    
}
