/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khakala <khakala@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:46:13 by khakala           #+#    #+#             */
/*   Updated: 2019/11/13 11:57:09 by khakala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "get_next_line.h"

int main(int ac, char **av)
{
	char	*buf;
	int		fd;
	int		ret;
	int		i;

	i = 0;
	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		while ((ret = get_next_line(fd, &buf)) > 0)
		{
			printf("ret value: %d Line nr:%d %s\n", ret, ++i, buf);
		}
		if (ret == -1)
			printf("\n Error not valid \n");
		else if (ret == 0)
			printf("\nStdin end \n");
		close(fd);
	}
	return (0);
}
