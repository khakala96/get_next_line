#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>

int	main(int ac, char const **av)
{
	int fd;
	int fd2;
	int i;
	char *line;
	int ret;

	fd = open(av[1], O_RDONLY);
	i = 1;
	while ((ret = get_next_line(fd, &line)) == 1 && i < 100)
	{
		printf("%d %s\n", i++, line);
	}
	fd2 = open(av[2], O_RDONLY);
	close(fd);
	fd = fd2;
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%d %s\n", i++, line);
	}
	return (ac);
}
